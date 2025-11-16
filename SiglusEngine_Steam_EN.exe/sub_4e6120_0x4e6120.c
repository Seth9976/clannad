// 函数: sub_4e6120
// 地址: 0x4e6120
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_1392cb4 = 0
data_187c534 = 0
int32_t ecx = _memset(0x7031c0, 0, 0x273990)
data_1392714 = 0
data_703180 = __paddd_xmmdq_memdq(zx.o(0), data_624960)
data_703190 = __paddd_xmmdq_memdq(data_624970, data_624960)

for (int32_t i = 8; i s< 0xe; i += 1)
    *((i << 2) + &data_703180) = i

int32_t var_1c = ecx
void* esi = nullptr
data_7031b8 = 0xe
data_1392cb0 = 0
data_108feb8 = 1
int32_t var_c = 0
BOOL var_8 = 0
void* var_14
int32_t eax_1
int32_t ecx_2
eax_1, ecx_2 = sub_434030(&var_14, &var_8, &var_c, &var_14, nullptr)
int32_t var_10

if (eax_1 != 0)
    int32_t var_1c_1 = ecx_2
    esi = sub_444f80(&var_10, &var_14)

sub_4d6c40(&var_c, &var_8)
data_108f338 = esi

if (esi == 0)
    data_13926f8 = 0x1e0
    data_13926fc = 0x280
else if (esi == 1)
    data_13926fc = 0x320
    data_13926f8 = 0x258
else if (esi != 0x3e7)
    data_13926f8 = 0x1e0
    data_13926fc = 0x280
else
    data_13926fc = var_10
    data_13926f8 = var_14

bool cond:1 = data_108feb8 == 0
data_1c051d4 = 0

if (not(cond:1))
    char eax_5 = sub_41a710()
    int32_t ecx_5 = data_1c051d4
    
    if (eax_5 != 0)
        ecx_5 = 1
    
    data_1c051d4 = ecx_5

return sub_4467b0()
