#参考
#シンプルで応用の効くmakefileとその解説
#http://urin.github.io/posts/2013/simple-makefile-for-clang

#Makefileの関数
#https://qiita.com/chibi929/items/b8c5f36434d5d3fbfa4a

#トリビアなmakefile入門
#http://www.jsk.t.u-tokyo.ac.jp/~k-okada/makefile/

#マクロ定義
#http://exlight.net/devel/make/macro_definition.html

#wildcardを利用したシンプルな汎用Makefile
#https://qiita.com/szkny/items/07b4c93702b3f8090fa3

PROGRAM = all_test

SRCDIR = ./
SRCS = $(wildcard $(SRCDIR)/*.cpp)
#SRCS = test_matrix.cpp #test_io.cpp

OBJDIR = ./obj
OBJS = $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.cpp=.o)))

TESTDIR = ./build
TESTS = $(basename $(notdir $(SRCS)))

CC = clang++
CFLAGS = -std=c++17 -Wall -Wextra
GTEST = -I/usr/local/include -L/usr/local/lib -lgtest -lgtest_main

.SUFFIXES: .cpp .o

# 個別のテストを登録するマクロ
define MAKETEST
$(1): $(OBJDIR)/$(1).o
	mkdir -p $(TESTDIR)
	$(CC) -o $(TESTDIR)/$(1) $(OBJDIR)/$(1).o $(GTEST) $(CFLAGS)
	$(TESTDIR)/$(1)
endef

# 全てのテストを実行
.PHONY: test
test : $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) -o $(PROGRAM) $^ $(GTEST) $(CFLAGS)

# 個別のテスト
$(foreach VAR,$(TESTS),$(eval $(call MAKETEST,$(VAR))))

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	-mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: clean
clean:
	-rm -f $(OBJS) $(PROGRAM)