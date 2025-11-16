// 函数: sub_422c40
// 地址: 0x422c40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1af1768 != 0)
    data_1af177c = 1
    data_1af1768 = 0

sub_48d140()
int32_t eax = data_1af1788
bool cond:0 = data_71929c == 0x11
data_13740a8 = 0

if (cond:0)
    eax = 1

data_13125b4 = 0
data_1af1788 = eax
sub_41ff20()
void* eax_1 = sub_57d3c0()
data_13740f0 = 0
sub_460c30(eax_1, 0, 1, 1, 0)
BOOL result = data_1372c1c
data_1392cc4 = 0
data_13701e0 = 1
data_1392cc8 = 1
data_f89aec = 0xffffffff
data_f89af0 = 0xffffffff
data_f89af4 = 0xffffffff
data_f89af8 = 0xffffffff

if (result != data_1372c18)
    int32_t edx_1 = data_63e16c
    data_1af1714 = 0
    data_187c51f = 0
    data_1af1710 = 0
    data_187c51e = 0
    data_187c51d = 0
    result = sub_49e720(result, edx_1, 0x976380, 0x64)
    data_1393190 = 0

data_1372c14 = 1
data_13130dc = 0xffffffff
data_13130e0 = 0xffffffff
data_13130e4 = 0xffffffff
data_13130e8 = 0
data_13701dc = 0
data_703008 = 1
data_13701d8 = 0
data_137010c = 1
return result
