# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mluis <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/08 18:25:43 by mluis             #+#    #+#              #
#    Updated: 2024/12/08 18:25:48 by mluis            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := rush-02

SOURCE_DIR := srcs
INCLUDE_DIR := include
OBJECT_DIR := objs
TEST_DIR := tests
TEST_OUTPUT_FILE := output.txt

CC := cc
CFLAGS := -Wall -Wextra -Werror -I $(INCLUDE_DIR)

NORM := norminette
NORM_FLAGS := -R CheckForbiddenSourceHeader -R CheckDefine

rwildcard = $(shell find $(1) -type f -name '$(2)')

sources := $(call rwildcard,$(SOURCE_DIR),*.c)
headers := $(call rwildcard,$(INCLUDE_DIR),*.h)

objects := $(sources:$(SOURCE_DIR)/%.c=$(OBJECT_DIR)/%.o)

.PHONY: all
all: $(NAME)

$(NAME): $(objects)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJECT_DIR)/%.o: $(SOURCE_DIR)/%.c $(INCLUDE_DIR)/%.h
	@$(NORM) $(NORM_FLAGS) $^
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	$(RM) -r $(OBJECT_DIR)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

.PHONY: test
test: all
	$(RM) ${TEST_DIR}/*/${TEST_OUTPUT_FILE}
	sh test.sh
