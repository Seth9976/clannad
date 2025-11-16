// 函数: sub_449882
// 地址: 0x449882
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2
int32_t edi
int32_t var_20 = edi
int32_t* ecx = *(esi + 0x20)

if (ecx != 0)
    sub_449049(ecx, 3)
    *(esi + 0x20) = 0

int32_t* eax_2 = sub_745f3f(arg3 * 0x28 + 4)
void* eax_4

if (eax_2 == 0)
    eax_4 = nullptr
else
    *eax_2 = arg3
    sub_61cdd0(&eax_2[1], 0x28, arg3, sub_443270)
    eax_4 = &eax_2[1]

*(esi + 0x20) = eax_4

if (eax_4 == 0)
    return 0x8007000e

int32_t* eax_7 = *(arg1 + 0xb0) + (*(esi + 0x14) << 2)
void* ecx_5 = *(*eax_7 + 0x2c) + *(esi + 0x18) + 0x18
arg2 = ecx_5
void* var_14 = ecx_5
int32_t eax_10 = *(*eax_7 + 0x30) + *(esi + 0x1c)
int32_t var_10 = eax_10
int32_t var_8 = eax_10

if (arg3 u> 0)
    void* ebx_1 = nullptr
    int32_t i_1 = arg3
    int32_t i
    
    do
        *(ebx_1 + *(esi + 0x20) + 0x10) = 3
        *(ebx_1 + *(esi + 0x20) + 0x14) = *(esi + 0x14)
        *(ebx_1 + *(esi + 0x20) + 0x18) = arg2 - *(*(*(arg1 + 0xb0) + (*(esi + 0x14) << 2)) + 0x2c)
        *(ebx_1 + *(esi + 0x20) + 0x1c) = var_8 - *(*(*(arg1 + 0xb0) + (*(esi + 0x14) << 2)) + 0x30)
        int32_t eax_22
        
        if (*(*(*(arg1 + 0xb0) + (*(esi + 0x14) << 2)) + 0x40) != 0)
            eax_22 = *(*(arg1 + 0x38) + 0x10)
        else
            eax_22 = *(arg1 + 0x20)
        
        *(ebx_1 + *(esi + 0x20) + 0xc) = sub_443c0f(eax_22, &arg2, &var_10)
        void* eax_27
        
        if (*(*(*(arg1 + 0xb0) + (*(esi + 0x14) << 2)) + 0x40) != 0)
            eax_27 = *(*(arg1 + 0x38) + 0x10)
        else
            eax_27 = *(arg1 + 0x20)
        
        sub_443af4(eax_27, &var_14, &var_8)
        void* ecx_17 = ebx_1 + *(esi + 0x20)
        *(ecx_17 + 0x14)
        int32_t edx_4
        
        if (*((*(arg1 + 0xb0))[*(ecx_17 + 0x14)] + 0x40) != 0)
            edx_4 = *(*(arg1 + 0x38) + 0x10)
        else
            edx_4 = *(arg1 + 0x20)
        
        *(ecx_17 + 4) = *((*(arg1 + 0xb0))[*(ecx_17 + 0x14)] + 0x2c) + *(ecx_17 + 0x18) + edx_4
        void* ecx_18 = ebx_1 + *(esi + 0x20)
        *(ecx_18 + 0x14)
        int32_t edx_9
        
        if (*((*(arg1 + 0xb0))[*(ecx_18 + 0x14)] + 0x40) != 0)
            edx_9 = *(*(arg1 + 0x38) + 0x10)
        else
            edx_9 = *(arg1 + 0x20)
        
        ebx_1 += 0x28
        i = i_1
        i_1 -= 1
        *ecx_18 = *((*(arg1 + 0xb0))[*(ecx_18 + 0x14)] + 0x30) + *(ecx_18 + 0x1c) + edx_9
    while (i != 1)

return 0
