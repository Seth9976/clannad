// 函数: sub_4b258b
// 地址: 0x4b258b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x56] != 0)
    return 0

int32_t edi
int32_t var_70_1 = edi
int32_t var_8_1 = 0
int32_t i = 0
void* const var_14_1 = nullptr
void* const var_24
void var_20

if ((arg1[0x1c].b & 0x40) == 0)
    int32_t var_64[0xf]
    __builtin_memset(&var_64, 0, 0x40)
    var_24 = nullptr
    void* edi_6 = &var_20
    *edi_6 = 0
    void* edi_7 = edi_6 + 4
    *edi_7 = 0
    bool cond:1_1 = arg1[2] u<= 0
    *(edi_7 + 4) = 0
    
    if (not(cond:1_1))
        do
            void* edi_10 = *(arg1[5] + (i << 2))
            
            if ((*(*(arg1[4] + (*(edi_10 + 4) << 2)) + 4) & 0x20) != 0)
                int32_t eax_15 = (*(*arg1 + 0x54))(*(edi_10 + 0x6c))
                int32_t eax_17 = (*(*arg1 + 0x58))(*(edi_10 + 0x6c))
                
                if (eax_15 == 0xb)
                    if (eax_17 u< 4)
                        var_64[*(edi_10 + 0x10) + (eax_17 << 2)] = 1
                        (&var_24)[eax_17] = *(edi_10 + 0x60)
                else if (eax_15 == 0xd && eax_17 == 0 && *(edi_10 + 0x10) != eax_17
                        && var_14_1 == eax_17)
                    sub_4a4100(arg1, *(edi_10 + 0x60), 0x11b0, "DEPTH must be a scalar")
                    var_14_1 = 1
                    var_8_1 = 1
            
            i += 1
        while (i u< arg1[2])
    
    int32_t var_14_2 = 0
    int32_t var_10_3 = 1
    
    for (int32_t i_1 = 0; i_1 u< 4; i_1 += 1)
        int32_t ecx_19 = 0
        int32_t __saved_ebp
        void* eax_22 = &(&__saved_ebp)[i_1 * 4 - 0x18]
        int32_t j_1 = 4
        int32_t j
        
        do
            int32_t ebx_2
            ebx_2.b = *eax_22 != 0
            eax_22 += 4
            ecx_19 += ebx_2
            j = j_1
            j_1 -= 1
        while (j != 1)
        
        if (ecx_19 != 0)
            if (ecx_19 != 4)
                int32_t i_3 = i_1
                sub_4a4100(arg1, (&var_24)[i_1], 0x11b1, "COLOR%d must be a four-component vector")
                var_8_1 = 1
            
            if (var_14_2 != 0)
                var_10_3 = 0
        else
            if (i_1 == 0)
                sub_4a4100(arg1, var_24, 0x11b2, 
                    "pixel shader must minimally write all four components of COLOR0")
                var_8_1 = 1
            
            var_14_2 = 1
    
    if (var_10_3 == 0)
        sub_4a4100(arg1, nullptr, 0x11ba, "COLOR outputs must be contiguous from COLOR0 to COLORn")
        var_8_1 = 1
else
    bool cond:2_1 = arg1[2] u<= 0
    var_24 = nullptr
    void* edi_1 = &var_20
    *edi_1 = 0
    void* edi_2 = edi_1 + 4
    *edi_2 = 0
    int32_t var_10_1 = 0
    *(edi_2 + 4) = 0
    
    if (not(cond:2_1))
        do
            void* edi_5 = *(arg1[5] + (i << 2))
            
            if ((*(*(arg1[4] + (*(edi_5 + 4) << 2)) + 4) & 0x20) != 0)
                int32_t eax_5 = (*(*arg1 + 0x54))(*(edi_5 + 0x6c))
                int32_t eax_7 = (*(*arg1 + 0x58))(*(edi_5 + 0x6c))
                
                if (eax_5 == 1)
                    if (eax_7 == 0)
                        (&var_24)[*(edi_5 + 0x10)] = 1
                        var_14_1 = *(edi_5 + 0x60)
                else if (eax_5 == 5 && eax_7 == 0 && *(edi_5 + 0x10) u> eax_7 && var_10_1 == eax_7)
                    sub_4a4100(arg1, *(edi_5 + 0x60), 0x11bc, "PSIZE must be a scalar")
                    var_10_1 = 1
                    var_8_1 = 1
            
            i += 1
        while (i u< arg1[2])
    
    int32_t ecx_7 = 0
    
    for (int32_t i_2 = 0; i_2 u< 4; i_2 += 1)
        if ((&var_24)[i_2] != 0)
            ecx_7 += 1
    
    if (ecx_7 != 4)
        sub_4a4100(arg1, var_14_1, 0x11bd, 
            "vertex shader must minimally write all four components of POSITION")
        var_8_1 = 1
int32_t eax_24 = neg.d(var_8_1)
return sbb.d(eax_24, eax_24, var_8_1 != 0) & 0x80004005
