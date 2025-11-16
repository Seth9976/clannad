// 函数: sub_4d55e0
// 地址: 0x4d55e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = data_1b8a650
int32_t edi = data_1bfe028
uint32_t eax_2 = timeGetTime()
data_1c051b4 = 0
data_1c051b0 = 0

if (eax_2 == 0)
    eax_2 = 1

data_1c051ac = 0
data_1c051b8 = eax_2
DEVMODEA var_a4
sub_4d1ba0(eax_2, 0x9c, &var_a4, 0)
var_a4.dmSize = 0x9c
var_a4.dmPelsWidth = edi
var_a4.dmPelsHeight = esi
var_a4.dmFields = 0x180000
BOOL result = sub_4d53f0(&var_a4, esi, edi, &var_a4, CDS_UPDATEREGISTRY)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
