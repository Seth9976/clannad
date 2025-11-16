// 函数: sub_49b44f
// 地址: 0x49b44f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
void* edi_1 = arg1
int32_t* eax = *(edi_1 + 0x20)
int16_t* esi = *(edi_1 + 0x18)
int32_t* var_8 = arg3
uint32_t eax_2 = zx.d(*esi)
int32_t result
uint32_t eax_30
uint32_t ecx_3
bool cond:0_1

if (eax_2 == 0)
    eax_30 = zx.d(esi[4])
    ecx_3 = arg4
    arg4 = ecx_3
    cond:0_1 = ecx_3 u<= eax_30
label_49b5d0:
    
    if (cond:0_1)
        goto label_49b5d5
    
    arg4 = eax_30
label_49b5d5:
    ecx_3.w = *(edi_1 + 8)
    
    if (ecx_3.w != 0)
        uint32_t eax_31
        uint32_t j_2
        
        if (*esi == 3)
            j_2 = zx.d(esi[2])
            eax_31 = zx.d(esi[3])
        else
            j_2 = zx.d(esi[3])
            eax_31 = zx.d(esi[2])
        
        if ((j_2.b & 3) != 0)
            int32_t var_14_1 = 0xac89b4
            
            if (ecx_3.w != 1)
                var_14_1 = 0xac89a4
            
            void* i_3 = eax_31 * arg4
            void* esi_2 = (j_2 + 3) & 0xfffffffc
            
            if (i_3 u> 0)
                void* ecx_12 = ((i_3 << 2) + 4) * j_2 + var_8
                void* var_10_2 = ((i_3 << 2) + 4) * esi_2 + eax
                void* eax_34 = &eax[i_3 * esi_2 + j_2]
                void* i_2 = i_3
                void* i
                
                do
                    int32_t edi_4 = esi_2 << 2
                    var_10_2 -= edi_4
                    eax_34 -= edi_4
                    ecx_12 -= j_2 << 2
                    arg3 = esi_2
                    
                    if (esi_2 u> j_2)
                        void* edx_14 = var_10_2
                        
                        do
                            arg3 -= 1
                            edx_14 -= 4
                            *edx_14 = *(var_14_1 + ((arg3 & 3) << 2))
                        while (arg3 u> j_2)
                    
                    if (j_2 u> 0)
                        void* edx_18 = eax_34
                        arg3 = ecx_12
                        uint32_t j_1 = j_2
                        uint32_t j
                        
                        do
                            arg3 -= 4
                            edx_18 -= 4
                            j = j_1
                            j_1 -= 1
                            *edx_18 = *arg3
                        while (j != 1)
                    
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                edi_1 = arg1
            
            var_8 = eax
    
    uint32_t eax_37 = *(edi_1 + 0x2c) * arg4
    uint32_t ecx_13 = zx.d(*(edi_1 + 0xc))
    
    if (eax_37 u> ecx_13)
        eax_37 = ecx_13
    
    result = (*(edi_1 + 0x1c))(arg2, zx.d(*(edi_1 + 0xa)) + arg5, var_8, eax, eax_37)
    
    if (result s< 0)
        return result
else
    if (eax_2 == 1)
        ecx_3 = zx.d(esi[3])
    label_49b5b8:
        arg4 = divu.dp.d(0:arg4, ecx_3)
        eax_30 = zx.d(esi[4])
        cond:0_1 = arg4 u<= eax_30
        goto label_49b5d0
    
    if (eax_2 == 2)
        ecx_3 = zx.d(esi[3]) * zx.d(esi[2])
        goto label_49b5b8
    
    if (eax_2 == 3)
        ecx_3 = zx.d(esi[2])
        arg4 = divu.dp.d(0:arg4, ecx_3 * zx.d(esi[3]))
        uint32_t eax_21 = zx.d(esi[4])
        
        if (arg4 u> eax_21)
            arg4 = eax_21
        
        int32_t var_10_1 = 0
        int32_t* edx_5 = eax
        
        if (arg4 u> 0)
            do
                int32_t i_1 = 0
                
                if (zx.d(esi[3]) u> 0)
                    do
                        int32_t eax_23 = 0
                        
                        if (ecx_3 u> 0)
                            do
                                *edx_5 = *(arg3
                                    + (((ecx_3 * var_10_1 + eax_23) * zx.d(esi[3]) + i_1) << 2))
                                ecx_3 = zx.d(esi[2])
                                edx_5 = &edx_5[1]
                                eax_23 += 1
                            while (eax_23 u< ecx_3)
                        
                        i_1 += 1
                    while (i_1 u< zx.d(esi[3]))
                
                var_10_1 += 1
            while (var_10_1 u< arg4)
        
        var_8 = eax
        goto label_49b5d5
    
    if (eax_2 != 5)
        return 0x80004001
    
    arg4 = divu.dp.d(0:arg4, *(edi_1 + 0x34))
    uint32_t eax_11 = zx.d(esi[4])
    
    if (arg4 u> eax_11)
        arg4 = eax_11
    
    arg1 = nullptr
    
    if (arg4 u> 0)
        do
            arg3 = nullptr
            
            if (esi[5] u> 0)
                do
                    void* ebx_1 = *(*(edi_1 + 0x38) + (arg3 << 2))
                    result = sub_49b44f(edi_1, arg2, var_8, *(ebx_1 + 0x30), arg5)
                    
                    if (result s< 0)
                        return result
                    
                    var_8 = &var_8[*(ebx_1 + 0x30)]
                    arg5 += *(ebx_1 + 0x28)
                    arg3 += 1
                while (arg3 u< zx.d(esi[5]))
            
            arg1 += 1
        while (arg1 u< arg4)
return 0
