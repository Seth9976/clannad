// 函数: sub_4089cc
// 地址: 0x4089cc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_8_1 = 0
int16_t* ebx = arg1
int32_t edi
int32_t var_14 = edi

if (*ebx != 0xff)
    void* esi_1 = &ebx[3]
    
    do
        if (sub_4088cc(arg2, *esi_1, *(esi_1 + 1)) != 0)
            return 0x8876086c
        
        var_8_1 += 1
        esi_1 += 8
    while (*(esi_1 - 6) != 0xff)

if (sub_40b661(arg2) + var_8_1 u> 0x41)
    return 0x8876086c

while (*ebx != 0xff)
    sub_4088f6(ebx, arg2)
    ebx = &ebx[4]

return 0
