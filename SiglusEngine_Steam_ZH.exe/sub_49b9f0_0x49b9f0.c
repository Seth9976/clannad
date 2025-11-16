// 函数: sub_49b9f0
// 地址: 0x49b9f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
void* edi_1 = arg1
int16_t* esi = *(edi_1 + 0x18)
uint32_t ebx = *(edi_1 + 0x20)
uint32_t var_8 = arg3
uint32_t eax_1 = zx.d(*esi)
int32_t* var_c = ebx
int32_t result
uint32_t eax_28
uint32_t ecx_3
bool cond:1_1

if (eax_1 == 0)
    eax_28 = zx.d(esi[4])
    ecx_3 = arg4
    arg4 = ecx_3
    cond:1_1 = ecx_3 u<= eax_28
label_49bb72:
    
    if (cond:1_1)
        goto label_49bb77
    
    arg4 = eax_28
label_49bb77:
    ecx_3.w = esi[1]
    
    if (ecx_3.w != 2)
        int32_t i_5 = *(edi_1 + 0x34) * arg4
        uint32_t ecx_10 = zx.d(ecx_3.w)
        
        if (ecx_10 == 1)
            if (i_5 u> 0)
                ecx_3 = ebx
                int32_t i
                
                do
                    int32_t ebx_6
                    ebx_6.b = *(ecx_3 + var_8 - ebx) != 0
                    *ecx_3 = ebx_6
                    ecx_3 += 4
                    i = i_5
                    i_5 -= 1
                while (i != 1)
        else if (ecx_10 != 2 && ecx_10 == 3 && i_5 u> 0)
            ecx_3 = ebx
            int32_t i_1
            
            do
                *ecx_3 = fconvert.s(float.t(*(var_8 - ebx + ecx_3)))
                ecx_3 += 4
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        var_8 = var_c
    
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
            int32_t var_14_1 = 0xac89f4
            
            if (ecx_3.w != 1)
                var_14_1 = 0xac89e4
            
            int32_t* i_6 = eax_31 * arg4
            int32_t* esi_2 = (j_2 + 3) & 0xfffffffc
            
            if (i_6 u> 0)
                int32_t* ecx_13 = ((i_6 << 2) + 4) * j_2 + var_8
                void* var_10_2 = ((i_6 << 2) + 4) * esi_2 + var_c
                void* eax_34 = &var_c[i_6 * esi_2 + j_2]
                int32_t* i_4 = i_6
                int32_t* i_2
                
                do
                    int32_t edi_4 = esi_2 << 2
                    var_10_2 -= edi_4
                    eax_34 -= edi_4
                    ecx_13 -= j_2 << 2
                    arg3 = esi_2
                    
                    if (esi_2 u> j_2)
                        void* edx_18 = var_10_2
                        
                        do
                            arg3 -= 1
                            edx_18 -= 4
                            *edx_18 = *(var_14_1 + ((arg3 & 3) << 2))
                        while (arg3 u> j_2)
                    
                    if (j_2 u> 0)
                        void* edx_22 = eax_34
                        arg3 = ecx_13
                        uint32_t j_1 = j_2
                        uint32_t j
                        
                        do
                            arg3 -= 4
                            edx_22 -= 4
                            j = j_1
                            j_1 -= 1
                            *edx_22 = *arg3
                        while (j != 1)
                    
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
                edi_1 = arg1
            
            var_8 = var_c
    
    uint32_t eax_37 = *(edi_1 + 0x2c) * arg4
    uint32_t ecx_14 = zx.d(*(edi_1 + 0xc))
    
    if (eax_37 u> ecx_14)
        eax_37 = ecx_14
    
    result = (*(edi_1 + 0x1c))(arg2, zx.d(*(edi_1 + 0xa)) + arg5, var_8, var_c, eax_37)
    
    if (result s< 0)
        return result
else
    if (eax_1 == 1)
        ecx_3 = zx.d(esi[3])
    label_49bb5a:
        arg4 = divu.dp.d(0:arg4, ecx_3)
        eax_28 = zx.d(esi[4])
        cond:1_1 = arg4 u<= eax_28
        goto label_49bb72
    
    if (eax_1 == 2)
        ecx_3 = zx.d(esi[3]) * zx.d(esi[2])
        goto label_49bb5a
    
    if (eax_1 == 3)
        ecx_3 = zx.d(esi[2])
        arg4 = divu.dp.d(0:arg4, ecx_3 * zx.d(esi[3]))
        uint32_t eax_20 = zx.d(esi[4])
        
        if (arg4 u> eax_20)
            arg4 = eax_20
        
        int32_t var_10_1 = 0
        int32_t* edx_5 = var_c
        
        if (arg4 u> 0)
            do
                int32_t i_3 = 0
                
                if (zx.d(esi[3]) u> 0)
                    do
                        int32_t eax_22 = 0
                        
                        if (ecx_3 u> 0)
                            do
                                *edx_5 = arg3[(ecx_3 * var_10_1 + eax_22) * zx.d(esi[3]) + i_3]
                                ecx_3 = zx.d(esi[2])
                                edx_5 = &edx_5[1]
                                eax_22 += 1
                            while (eax_22 u< ecx_3)
                        
                        i_3 += 1
                    while (i_3 u< zx.d(esi[3]))
                
                var_10_1 += 1
            while (var_10_1 u< arg4)
        
        ebx = var_c
        var_8 = ebx
        goto label_49bb77
    
    if (eax_1 != 5)
        return 0x80004001
    
    arg4 = divu.dp.d(0:arg4, *(edi_1 + 0x34))
    uint32_t eax_10 = zx.d(esi[4])
    
    if (arg4 u> eax_10)
        arg4 = eax_10
    
    arg1 = nullptr
    
    if (arg4 u> 0)
        do
            arg3 = nullptr
            
            if (esi[5] u> 0)
                do
                    void* ebx_1 = *(*(edi_1 + 0x38) + (arg3 << 2))
                    result = sub_49b9f0(edi_1, arg2, var_8, *(ebx_1 + 0x30), arg5)
                    
                    if (result s< 0)
                        return result
                    
                    var_8 += *(ebx_1 + 0x30) << 2
                    arg5 += *(ebx_1 + 0x28)
                    arg3 += 1
                while (arg3 u< zx.d(esi[5]))
            
            arg1 += 1
        while (arg1 u< arg4)
return 0
