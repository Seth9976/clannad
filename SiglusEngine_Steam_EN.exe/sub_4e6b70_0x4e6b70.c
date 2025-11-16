// 函数: sub_4e6b70
// 地址: 0x4e6b70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
data_1c04438 = sub_4d7d90(ecx)
sub_4e6830()
sub_44a2a0()
int32_t eax_1 = data_1b1bd14

if (data_702fc0 != 0)
    eax_1 = 1

data_1b1bd14 = eax_1
sub_451d80()
sub_4c25d0(nullptr)

if (data_702fc0 != 0)
    bool cond:1_1 = data_108f33c != 0
    data_1af476c = 0xc9
    
    if (not(cond:1_1))
        data_1af476c = 0xca
else if (data_108f33c == 0)
    data_1af476c = 0
else
    data_1af476c = 0xcb

if (data_1c051e0 != 0)
    sub_4d5870()

int32_t esi = data_187c518

if (esi == 0xffffffff && data_702fc0 == 0)
    esi = data_12ff378

if (data_1af4558 != 0)
    esi = 1

data_187c518 = esi

if (sub_4d4db0() != 0)
    int32_t eax_3 = data_1af40f4
    
    if (eax_3 != 0xffffffff)
        int32_t ecx_1 = data_1af40f0
        
        if (ecx_1 != 0xffffffff)
            data_1c051d0 = eax_3
            data_1c051cc = ecx_1

data_187c520 = 0xffffffff
char edx = 1
data_1c0518f = 0
data_1c0518e = 0
data_1af17cb = 1

if (esi != 0xffffffff)
    return sub_4d4e10(esi, edx) __tailcall

return sub_4d4e10(1, edx) __tailcall
