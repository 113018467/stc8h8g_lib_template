# stc8h8g_lib_template
STC8H和STC8G的通用模版，里面使用T0做了Tick功能，串口已经初始化配置并能使用printf打印数据

# 编辑日期：20260203

# 文件说明：
│  keilclean.bat -> 清除临时文件脚本
│  
├─Driver -> 官方硬设函数库
│  │  UPDATE-NOTE.txt -> 更新说明
│  ├─inc -> 头文件
│  ├─isr -> 中断函数
│  └─src -> 函数原型
│          
├─RVMDK -> 项目工程文件
│  │  STARTUP.A51
│  │  STC8G-H-LIB.uvproj
│  ├─Listings
│  └─Objects
│          STC8G-H-LIB.hex -> 量产烧录文件
│          stc_tool_config.cfg -> STC烧录软件配置文件
│          stc_tool_config使用说明.png -> STC烧录软件配置文件使用说明
│          
└─User -> 程序源代码文件

# 芯片不同工况的电流情况
   1、使用全浮空输入时，端口输入模拟信号，待机电流会增高
   2、浮空输入端口，如果使用开关电源供电，待机电流会增高，使用电池则不会出现这种问题
   3、设置内部32kHz时钟后，需要把IRC(内部高速时钟)关闭才能使功耗优化
   休眠3.3uA时，没有关闭实测839uA；关闭后与规格书标称相符，实测491uA。
      a、  1倍分频：491uA
      b、 32倍分频：486uA
      c、 64倍分频：487uA
      d、128倍分频：486uA
      e、255倍分频：486uA
   功耗和时钟分频没有太直接的关系。

# 20260203
   在官方基础上加入：
   1、在"Type_def.h"头文件加入一些新定义
