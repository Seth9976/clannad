// 函数: sub_4c0cd6
// 地址: 0x4c0cd6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x56] != 0)
    return 0

int32_t edi
int32_t var_70_1 = edi
int32_t var_64[0xf]
__builtin_memset(&var_64, 0, 0x40)
void* const var_24 = nullptr
void var_20
void* edi_1 = &var_20
*edi_1 = 0
void* edi_2 = edi_1 + 4
*edi_2 = 0
*(edi_2 + 4) = 0
arg1[0x86] = 0
arg1[0x87] = 0
__builtin_memset(&arg1[0x7e], 0, 0x20)
int32_t var_8_1 = 0
int32_t var_10_1 = 0
int32_t i = 0

if (arg1[2] u> 0)
    do
        void* edi_9 = *(arg1[5] + (i << 2))
        int16_t eax_4 = (*(*(arg1[4] + (*(edi_9 + 4) << 2)) + 4)).w
        
        if ((eax_4.b & 0x20) != 0)
            int32_t eax_6 = (*(*arg1 + 0x54))(*(edi_9 + 0x6c))
            int32_t eax_8 = (*(*arg1 + 0x58))(*(edi_9 + 0x6c))
            
            if (eax_6 == 0xb)
                if (eax_8 u< 4)
                    var_64[*(edi_9 + 0x10) + (eax_8 << 2)] = 1
                    (&var_24)[eax_8] = *(edi_9 + 0x60)
            else if (eax_6 == 0xd && eax_8 == 0 && *(edi_9 + 0x10) != eax_8 && var_10_1 == eax_8)
                sub_4a4100(arg1, *(edi_9 + 0x60), 0x11b0, "DEPTH must be a scalar")
                var_10_1 = 1
                var_8_1 = 1
        else if ((eax_4.b & 0x10) != 0 && (eax_4:1.b & 2) == 0)
            int32_t eax_11 = (*(*arg1 + 0x54))(*(edi_9 + 0x6c))
            int32_t eax_13 = (*(*arg1 + 0x58))(*(edi_9 + 0x6c))
            void* eax_14
            
            if (eax_11 == 6)
                if (eax_13 u< 8)
                    eax_14 = &arg1[eax_13 + 0x7e]
                label_4c0e08:
                    int32_t ecx_13 = *(edi_9 + 0x10) + 1
                    
                    if (*eax_14 u< ecx_13)
                        *eax_14 = ecx_13
            else if (eax_11 == 0xb && eax_13 u< 2)
                eax_14 = &arg1[eax_13 + 0x86]
                goto label_4c0e08
        
        i += 1
    while (i u< arg1[2])

int32_t var_c_1 = 0
int32_t var_14_1 = 1

for (int32_t i_1 = 0; i_1 u< 4; i_1 += 1)
    int32_t ecx_14 = 0
    int32_t __saved_ebp
    void* eax_18 = &(&__saved_ebp)[i_1 * 4 - 0x18]
    int32_t j_1 = 4
    int32_t j
    
    do
        int32_t edx_1
        edx_1.b = *eax_18 != 0
        eax_18 += 4
        ecx_14 += edx_1
        j = j_1
        j_1 -= 1
    while (j != 1)
    
    if (ecx_14 != 0)
        if (ecx_14 != 4)
            int32_t i_2 = i_1
            sub_4a4100(arg1, (&var_24)[i_1], 0x11b1, "COLOR%d must be a four-component vector")
            var_8_1 = 1
        
        if (var_c_1 != 0)
            var_14_1 = 0
    else
        if (i_1 == 0)
            sub_4a4100(arg1, var_24, 0x11b2, 
                "pixel shader must minimally write all four components of COLOR0")
            var_8_1 = 1
        
        var_c_1 = 1

if (var_14_1 == 0)
    sub_4a4100(arg1, nullptr, 0x11ba, "COLOR outputs must be contiguous from COLOR0 to COLORn")
    var_8_1 = 1

int32_t eax_20 = neg.d(var_8_1)
return sbb.d(eax_20, eax_20, var_8_1 != 0) & 0x80004005
