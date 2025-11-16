// 函数: sub_1a996ee
// 地址: 0x1a996ee
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t var_8 = arg1
int32_t var_c = arg1

if (data_1c09308 == 0)
    sub_1a9493b()

GetModuleFileNameA(nullptr, &data_1c077a8, 0x104)
char* eax = data_1c092e8
data_1c076d0 = &data_1c077a8
void* edi = &data_1c077a8

if (*eax != 0)
    edi = eax

sub_1a99787(edi, nullptr, nullptr, &var_8, &var_c)
void* eax_3 = sub_1a91fb2(var_c + (var_8 << 2))

if (eax_3 == 0)
    sub_1a931cd(8)

sub_1a99787(edi, eax_3, eax_3 + (var_8 << 2), &var_8, &var_c)
int32_t result = var_8 - 1
data_1c076b8 = eax_3
data_1c076b4 = result
return result
