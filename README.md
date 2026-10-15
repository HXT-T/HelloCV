# HelloCV

## Task 01｜Linux & Git

**主题：Linux 开发环境与 Git 版本控制**

### 1. 学习内容

**Linux 开发环境**
- WSL2 + Ubuntu 22.04
- Linux 基本命令与文件管理
- GCC / G++ 编译工具
- VS Code 远程开发环境
- SSH、tmux、PM2 等工具

**Git 版本控制**
- Git 仓库初始化与基本配置
- 工作区、暂存区与版本提交
- 分支创建与合并
- `git stash` 临时保存修改
- GitHub / Gitee 远程仓库管理
- `git push`、`git pull` 等操作

### 2. 实践项目

**C++ 四则运算计算器**

通过简单的 C++ 项目练习 Git 的基本工作流程，包括分支开发、代码提交、版本合并及远程同步。

项目地址：[Git Training - Gitee](https://gitee.com/shanzuibang/git_training)

### 3. 学习记录

Linux 学习记录、Git 学习记录及 Git 实践笔记统一收录于 [NOTES.md](NOTES.md)。

---

## Task 02｜CMake & LLM

**主题：C++ 工程构建与大语言模型 API 实践**

### Part A｜CMake

**状态：核心实践已完成**

#### 1. 学习内容

- CMake 的基本原理与构建流程
- `CMakeLists.txt` 编写
- 静态库与模块化编程
- `add_library()` 与 `add_executable()`
- `add_subdirectory()` 与 `target_link_libraries()`
- 头文件路径配置
- 源码外构建（Out-of-source Build）

#### 2. 实践项目：UnitConverter

基于 C++17 和 CMake 实现命令行单位转换器。

支持三组单位的双向转换：

| 转换类型 | 支持方向 |
|---|---|
| 温度 | 摄氏度 ↔ 华氏度 |
| 长度 | 米 ↔ 英尺 |
| 重量 | 千克 ↔ 磅 |

#### 3. 项目结构

```text
UnitConverter/
├── CMakeLists.txt
├── src/
│   └── main.cpp
└── unitlib/
    ├── CMakeLists.txt
    ├── include/
    │   └── unitlib.h
    └── src/
        └── unitlib.cpp
```

项目将用户交互与单位转换逻辑分离，使用独立静态库管理转换函数。

#### 4. 环境与运行

开发环境：

- WSL2 / Ubuntu 22.04
- G++ 11.4.0
- CMake 3.22.1
- C++17

在仓库根目录执行：

```bash
cmake -S UnitConverter -B UnitConverter/build
cmake --build UnitConverter/build
./UnitConverter/build/UnitConverter
```

#### 5. 测试结果

- CMake 配置成功
- 静态库编译及链接成功
- 可执行程序生成成功
- 已验证 36°C → 96.8°F

项目代码：[UnitConverter](UnitConverter/)

### Part B｜LLM

**状态：待完成**

#### 1. 学习内容

- LLM 与 Agent 的基本概念
- API 请求与响应
- JSON 数据格式
- DeepSeek 官方 API
- AI Agent 辅助开发
- 模型输出解析与异常处理

#### 2. 实践项目：LLM 石头剪刀布网关

通过 Python 实现本地程序与 DeepSeek 模型之间的通信，完成石头剪刀布交互。

具体实现、运行方法和测试结果将在实践完成后补充。

### 学习与实践记录

本次任务需要整理：

- CMake 学习笔记
- CMake 单位转换器实践记录
- LLM 网关实践记录

笔记完成后统一更新至 [NOTES.md](NOTES.md)。

---

