Irrlicht引擎中的数据类型
====
枚举类型
====
```
namespace video
{
    // Irrlicht引擎支持的所有类型驱动程序的枚举
    enum E_DRIVER_TYPE
    {
        EDT_NULL,
        EDT_SOFTWARE,
        EDT_BURNINGSVIDEO,
        EDT_DIRECT3D8,
        EDT_DIRECT3D9,
        EDT_OPENGL,
        EDT_COUNT
    };
}
```
- `EDT_NULL`：空驱动，运行时是不会显示出窗口，它可以加载纹理，但是不能渲染和显示任何图形。

- `EDT_SOFTWARE`：Irricht引擎的软件渲染器，可以运行在所有平台与硬件，并且它只支持2d图形，但是也可以执行一些原始的3d功能，而且绘画3D图形相当快，但也非常不准确，并且甚至不支持3D模式中的剪辑。

- `EDT_BURNINGSVIDEO`：软件渲染器的替代，它可以完美的对3D几何进行光栅化。能够执行正确的3D剪辑。

- `EDT_DIRECT3D8`：基于Direct8的渲染设备，并且只在win32平台上可用。

- `EDT_DIRECT3D9`：基于Direct9的渲染设备，并且只在win32平台上可用。

- `EDT_OPENGL`：基于opengl的渲染设备，大多数平台都可以用。

- `EDT_COUNT`：没有渲染驱动，只是为了计数元素。


基本数据类型
====

```
typedef unsigned __int8         u8;
typedef unsigned char           u8;
typedef __int8                  s8;
typedef signed char             s8;
typedef char                    c8;
typedef unsigned __int16        u16;
typedef unsigned short          u16;
typedef __int16                 s16;
typedef signed short            s16;
typedef unsigned __int32        u32;
typedef unsigned int            u32;
typedef __int32                 s32;
typedef signed int              s32;
typedef unsigned __int64        u64;
typedef unsigned long int       u64;
typedef unsigned long long      u64;
typedef unsigned long long      u64;
typedef __int64                 s64;
typedef long int                s64;
typedef long long               s64;
typedef long long               s64;
typedef float                   f32;
typedef double                  f64;
```
类型`__int8`，`__int16`和`__int32`是具有相同大小的ANSI类型的同义词,对于编写在多个平台上相同行为的可移植代码是有用的。`__int8`数据类型与`char`类型同义，`__int16`与`short`类型同义，`__int32`与`int`类型同义。 `__int64`类型没有ANSI等效。

- `u8` 8位 1个字节 无符号类型`char`
- `s8` 8位 1个字节 有符号类型`char`
- `c8` 8位 1个字节 有符号类型`char`
- `u16` 16位 2个字节 无符号类型`short`
- `s16` 16位 2个字节 有符号类型`short`
- `u32` 32位 4个字节 无符号类型`int`
- `s32` 32位 4个字节 有符号类型`int`
- `u64` 64位 8个字节 无符号类型`long long`
- `s64` 64位 8个字节 有符号类型`long long`
- `f32` 32位 4个字节 有符号类型`float`
- `f64` 64位 8个字节 有符号类型 `double`