// 函数: sub_44b7f5
// 地址: 0x44b7f5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx_2 = arg2 * 0x64 + *(arg1 + 0x2c)
int32_t edi
int32_t var_38 = edi
void* edi_3 = arg3 * 0x64 + ebx_2[1]
int32_t* eax = *(edi_3 + 0x38)
void* eax_1 = (*(*eax + 0xc))(eax)
int32_t eax_2 = *ebx_2
int32_t ecx_2 = *(eax_1 + 0x1c) + eax_2
int32_t ecx_4 = *(eax_1 + 0x20) + eax_2
int32_t ecx_6 = *(eax_1 + 0x24) + eax_2
int32_t eax_3 = *(eax_1 + 0xc)
int32_t eax_4 = *(eax_1 + 0x10)
int32_t eax_5 = *(eax_1 + 0x14)
bool cond:0 = (*(arg1 + 0x118) & 1) != 0
arg3 = nullptr
arg2 = nullptr

if (not(cond:0))
    int32_t eax_7
    int32_t mxcsr
    int32_t mxcsr_1
    int16_t x87control
    int16_t x87control_1
    eax_7, mxcsr_1, x87control_1 = __controlfp(mxcsr, x87control, 0, 0)
    *(arg1 + 0x114) = eax_7
    __controlfp(mxcsr_1, x87control_1, 0, 0x30000)
    *(arg1 + 0x118) |= 1

if (*(edi_3 + 0x3c) != 0)
    int32_t ecx_8 = *ebx_2
    int32_t eax_10 = *(eax_1 + 0x34) + ecx_8
    int32_t eax_12 = *(eax_1 + 0x38) + ecx_8
    uint32_t* var_1c_1 = *(eax_1 + 0x3c) + ecx_8
    arg2 = nullptr
    
    if (*(edi_3 + 0x4e) u> 0)
        uint32_t* eax_14
        
        do
            int32_t* ecx_11 = (zx.d(arg2.w) << 5) + *(edi_3 + 0x34)
            
            if (*ecx_11 != 0)
                *ecx_11 = ecx_11[1]
                eax_14 = ecx_11[4]
                uint32_t edx_1 = zx.d(eax_14[1].w)
                
                if (edx_1 == 0)
                    int32_t var_3c_3 = 0xffffffff
                    void** var_40_2 = &arg3
                    sub_44aea9(ecx_11[3], eax_12 + (zx.d(*(eax_14 + 6)) << 3), zx.d(eax_14[2].w), 
                        *(edi_3 + 0x3c), eax_14)
                else if (edx_1 == 1)
                    int32_t var_3c_2 = 0xffffffff
                    sub_44ab10(ecx_11[3], &var_1c_1[zx.d(*(eax_14 + 6)) * 8], zx.d(eax_14[2].w), 
                        *(edi_3 + 0x3c), eax_14, &arg3)
                else if (edx_1 == 2)
                    int32_t var_3c_1 = 0xffffffff
                    sub_44ab10(ecx_11[3], (zx.d(*(eax_14 + 6)) << 5) + eax_10, zx.d(eax_14[2].w), 
                        *(edi_3 + 0x3c), eax_14, &arg3)
            
            arg2 += 1
            eax_14.w = arg2.w
        while (eax_14.w u< *(edi_3 + 0x4e))
    
    arg3 = *ebx_2 + *(eax_1 + 0x34)
    arg2 = *(eax_1 + 0x18)

int16_t x87control_2 = sub_428975(*(edi_3 + 0x40), *(edi_3 + 0x44), 0, arg3, 0, ecx_2, ecx_6, 
    ecx_4, 0, arg2, 0, eax_3, eax_5, eax_4)

if (*(eax_1 + 0x4c) != 0)
    void* edi_5 = *(eax_1 + 0x28) + *ebx_2
    void* ecx_15 = *(eax_1 + 0x5c) + eax_1
    double* eax_26 = *ecx_15
    void* ecx_16 = ecx_15 + 4
    arg3 = edi_5
    
    if (eax_26 u> 0)
        arg2 = eax_26
        
        while (true)
            int32_t edx_8 = *ecx_16
            void* eax_29 = (edx_8 << 4) + edi_5
            void* edx_10 = (edx_8 << 5) + ecx_2
            void* edi_8 = (*(ecx_16 + 4) << 4) + eax_29
            
            while (eax_29 u< edi_8)
                *eax_29 = fconvert.s(fconvert.t(*edx_10))
                *(eax_29 + 4) = fconvert.s(fconvert.t(*(edx_10 + 8)))
                *(eax_29 + 8) = fconvert.s(fconvert.t(*(edx_10 + 0x10)))
                *(eax_29 + 0xc) = fconvert.s(fconvert.t(*(edx_10 + 0x18)))
                eax_29 += 0x10
                edx_10 += 0x20
            
            ecx_16 += 8
            double* temp5_1 = arg2
            arg2 -= 1
            
            if (temp5_1 == 1)
                break
            
            edi_5 = arg3

if (*(eax_1 + 0x54) != 0)
    int32_t ecx_18 = *(eax_1 + 0x30) + *ebx_2
    void* edi_10 = *(eax_1 + 0x64) + eax_1
    int32_t i_3 = *edi_10
    void* edi_11 = edi_10 + 4
    int32_t var_28_1 = ecx_18
    
    if (i_3 u> 0)
        int32_t i_2 = i_3
        int32_t i
        
        do
            int32_t eax_33 = *edi_11
            arg2 = (eax_33 << 5) + ecx_6
            void* edx_16 = (eax_33 << 4) + ecx_18
            void* j = (*(edi_11 + 4) << 4) + edx_16
            arg3 = edx_16
            
            if (edx_16 u< j)
                int32_t* ecx_19
                
                do
                    int32_t eax_39
                    eax_39, x87control_2 = __ftol(x87control_2, fconvert.t(*arg2))
                    ecx_19 = arg3
                    arg2 = &arg2[1]
                    *ecx_19 = eax_39
                    arg3 = &ecx_19[1]
                while (&ecx_19[1] u< j)
                ecx_18 = var_28_1
            
            edi_11 += 8
            i = i_2
            i_2 -= 1
        while (i != 1)

if (*(eax_1 + 0x50) != 0)
    int32_t edi_13 = *(eax_1 + 0x2c) + *ebx_2
    void* ebx_4 = *(eax_1 + 0x60) + eax_1
    void* eax_40 = *ebx_4
    void* ebx_5 = ebx_4 + 4
    
    if (eax_40 u> 0)
        arg3 = eax_40
        void* i_1
        
        do
            int32_t eax_41 = *ebx_5
            int32_t* j_1 = edi_13 + (eax_41 << 2)
            arg2 = (eax_41 << 5) + ecx_4
            
            for (void* eax_45 = &j_1[*(ebx_5 + 4)]; j_1 u< eax_45; j_1 = &j_1[1])
                int32_t eax_47
                eax_47, x87control_2 = __ftol(x87control_2, fconvert.t(*arg2))
                arg2 = &arg2[4]
                *j_1 = eax_47
            
            ebx_5 += 8
            i_1 = arg3
            arg3 -= 1
        while (i_1 != 1)

return 0
