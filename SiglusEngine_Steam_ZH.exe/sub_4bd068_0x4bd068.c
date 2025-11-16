// 函数: sub_4bd068
// 地址: 0x4bd068
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[0x40]
void* ecx = arg1[0x40]
int32_t edi
int32_t var_54 = edi
int32_t* edi_1 = *(eax + 0x10)
int32_t i_3 = *(eax + 0xc)
int32_t* var_18 = edi_1
void var_48
void var_38

for (int32_t i = 0; i u< 0x10; i += 4)
    *(&var_48 + i) = *(*(ecx + 8) + 0xc)
    *(&var_38 + i) = *(*(ecx + 8) + 0x1c)

void* eax_2 = *(arg1[5] + (*edi_1 << 2))

if (*(eax_2 + 4) == arg1[0x21])
    if (*(eax_2 + 0x6c) != 1)
        sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x12cd, "internal error: unexpected output register")
        return 0x80004005
    
    int32_t i_2 = i_3
    
    if (i_2 u> 0)
        int32_t i_1
        
        do
            i_1 = i_2
            i_2 -= 1
            *(*(arg1[5] + (*edi_1 << 2)) + 0xc) = 0
            *(*(arg1[5] + (*edi_1 << 2)) + 4) = arg1[0x22]
        while (i_1 != 1)

int32_t i_4 = i_3
void var_28

if (i_4 u> 0)
    int32_t* eax_4 = &var_28 - edi_1
    int32_t* var_c_1 = edi_1
    int32_t i_7 = i_4
    
    while (true)
        int32_t i_6 = i_4
        int32_t i_5 = i_4
        i_5.q = fconvert.d(float.t(0))
        int32_t eax_5 = sub_49f544(arg1, 0, 0, 0, i_5)
        var_c_1 = &var_c_1[1]
        *(eax_4 + edi_1) = eax_5
        int32_t ecx_9 = arg1[5]
        void* eax_6 = *(ecx_9 + (eax_5 << 2))
        i_4 = __builtin_memcpy(eax_6, *(ecx_9 + (*edi_1 << 2)), 0x80)
        *(eax_6 + 0x3c) = 0
        int32_t i_8 = i_7
        i_7 -= 1
        
        if (i_8 == 1)
            break
        
        edi_1 = var_c_1
    
    edi_1 = var_18

int32_t* eax_8 = *(arg1[0x40] + 8)
int32_t result = sub_4d75f7(arg1, 8, &var_28, i_3, eax_8, &eax_8[4], nullptr, 2, 0, 0, 0, 0)

if (result s< 0)
    return result

return sub_4d75f7(arg1, 4, edi_1, i_3, &var_48, &var_38, &var_28, i_3, 0, 0, 0, 0)
