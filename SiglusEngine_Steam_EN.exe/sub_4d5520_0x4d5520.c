// 函数: sub_4d5520
// 地址: 0x4d5520
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx
ebx.b = arg3
uint32_t eax_2 = timeGetTime()
data_1c051b4 = 0
data_1c051b0 = 0

if (eax_2 == 0)
    eax_2 = 1

data_1c051ac = 0
data_1c051b8 = eax_2
void var_a4
int32_t eax_3 = sub_4d1ba0(eax_2, 0x9c, &var_a4, 0)
int16_t var_80 = 0x9c
int32_t var_38 = arg2
int32_t var_34 = arg4
int32_t var_7c = 0x180000
DEVMODEA* var_b4
enum CDS_TYPE var_b0

if (ebx.b == 0 || (arg2 == data_1c051c8 && arg4 == data_1c051c4))
    var_b0 = 0
    var_b4 = nullptr
else
    var_b0 = CDS_FULLSCREEN
    eax_3 = &var_a4
    var_b4 = &var_a4

BOOL result = sub_4d53f0(eax_3, arg4, arg2, var_b4, var_b0)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
