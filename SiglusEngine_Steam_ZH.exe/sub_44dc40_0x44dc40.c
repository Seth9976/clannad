// 函数: sub_44dc40
// 地址: 0x44dc40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t result
int32_t mxcsr
int16_t x87control

if (arg3 != 0)
    int32_t var_14_1 = 0
    void* eax_1 = sub_4441ba(arg1, arg2)
    
    if (eax_1 == 0)
        result = 0x8876086c
    else
        *arg3 = 0
        void* edi_2 = &arg3[1]
        *edi_2 = 0
        void* edi_3 = edi_2 + 4
        *edi_3 = 0
        *(edi_3 + 4) = 0
        int32_t* eax_3 = *(eax_1 + 0x28) + *(arg1 + 0x20)
        void* eax_4
        
        if (*eax_3 != 0)
            eax_4 = &eax_3[1]
        else
            eax_4 = nullptr
        
        *arg3 = eax_4
        arg3[1] = *(eax_1 + 0x2c)
        void* edi_6 = &arg3[2]
        int32_t* ebx_1 = &arg3[3]
        *edi_6 = 0
        *ebx_1 = 0
        int32_t eax_5
        eax_5.w = *(eax_1 + 0x14)
        
        if (eax_5.w != *(arg1 + 0x42) || *(eax_1 + 0x18) != *(arg1 + 0x44))
            arg3 = nullptr
        else
            arg3 = 1
        
        int32_t edx_3
        edx_3.b = eax_5.w == *(arg1 + 0x40)
        int32_t result_1
        result_1, mxcsr, x87control = sub_44bf62(arg1, zx.d(*(eax_1 + 0x34)), arg3, edx_3, edi_6)
        result = result_1
        
        if (result s>= 0)
            int32_t result_2
            result_2, mxcsr, x87control =
                sub_44c1aa(arg1, zx.d(*(eax_1 + 0x34)), arg3, edx_3, ebx_1)
            result = result_2
else
    result = 0x8876086c

if ((*(arg1 + 0x118) & 1) != 0)
    __controlfp(mxcsr, x87control, *(arg1 + 0x114), 0x30000)
    *(arg1 + 0x118) &= 0xfffffffe

return result
