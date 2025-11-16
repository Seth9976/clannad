// 函数: sub_4b6d4b
// 地址: 0x4b6d4b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t edi
int32_t var_1c = edi

if (*(arg1 + 0xc) u> 0)
    int32_t** var_c_1 = *(arg1 + 0x18)
    
    do
        *(arg1 + 0xfc) = i
        int32_t* esi_1 = *var_c_1
        *(arg1 + 0x100) = esi_1
        
        if (esi_1 != 0 && *esi_1 != 0)
            int32_t eax_4 = *esi_1
            int32_t edx_2 = eax_4 & 0xfff00000
            int32_t var_20_2
            int32_t eax_6
            int32_t edx_3
            
            if (edx_2 u<= 0x60c00000)
                if (edx_2 == 0x60c00000)
                    var_20_2 = 2
                label_4b6f18:
                    eax_6 = var_20_2
                label_4b6f1b:
                    edx_3 = 1
                    goto label_4b6f2f
                
                if (edx_2 == 0x60200000)
                    eax_6 = 0
                    goto label_4b6f1b
                
                if (edx_2 == 0x60300000)
                    eax_6 = 0
                    goto label_4b6f21
                
                if (edx_2 != 0x60700000)
                    if (edx_2 != 0x60800000)
                        goto label_4b6e25
                    
                    eax_6 = 1
                    goto label_4b6f21
                
                if (zx.d((*(arg1 + 0xc8)).w) == 0x104)
                    goto label_4b6e25
                
                edx_3 = 1
                eax_6 = 1
                goto label_4b6f2f
            
            int32_t var_20_3
            
            if (edx_2 == 0x60d00000)
                var_20_3 = 2
            label_4b6f20:
                eax_6 = var_20_3
            label_4b6f21:
                edx_3 = 0
            label_4b6f2f:
                uint32_t var_20_4 = zx.d((*(arg1 + 0xc8)).b)
                int32_t var_24_1 = (&data_b59748)[edx_3]
                int32_t var_28_1 = (&data_b59738)[eax_6]
                sub_4a4100(arg1, esi_1[0xf], 0x11b4, "%s%s is not supported on ps_1_%i")
                return 0x80004005
            
            if (edx_2 == 0x61100000)
                var_20_2 = 3
                goto label_4b6f18
            
            if (edx_2 == 0x61200000)
                var_20_3 = 3
                goto label_4b6f20
            
        label_4b6e25:
            
            if (sub_4b4917(edx_2) != 0 || edx_2 == 0x11000000)
                int32_t edx_5 = neg.d(edx_2 - 0x11000000)
                void* eax_12 = *(*(arg1 + 0x14) + (*(esi_1[2]
                    + ((sbb.d(edx_5, edx_5, edx_2 != 0x11000000) & eax_4 & 0xfffff) << 2)) << 2))
                
                if (*(eax_12 + 0x3c) != 0 && zx.d((*(arg1 + 0xc8)).w) != 0x104
                        && (*(*(*(arg1 + 0x10) + (*(eax_12 + 4) << 2)) + 4) & 0x10) != 0)
                    uint32_t var_20_5 = zx.d((*(arg1 + 0xc8)).b)
                    sub_4a4100(arg1, esi_1[0xf], 0x11b4, 
                        "dependent texture read not supported on ps_1_%i")
                    return 0x80004005
        
        i += 1
        var_c_1 = &var_c_1[1]
    while (i u< *(arg1 + 0xc))

int32_t var_8 = 0

if (*(arg1 + 0xc) u<= 0)
    return 0

int32_t** var_10_1 = *(arg1 + 0x18)
int32_t var_c_2
int32_t* eax_19

while (true)
    *(arg1 + 0xfc) = var_8
    eax_19 = *var_10_1
    *(arg1 + 0x100) = eax_19
    
    if (eax_19 != 0 && *eax_19 != 0)
        var_c_2 = 0
        
        if (eax_19[1] u> 0)
            break
    
label_4b6ef0:
    var_8 += 1
    var_10_1 = &var_10_1[1]
    
    if (var_8 u>= *(arg1 + 0xc))
        return 0

int32_t* edx_12 = eax_19[2]

while (true)
    void* esi_3 = *(*(arg1 + 0x14) + (*edx_12 << 2))
    
    if (*(esi_3 + 4) == *(arg1 + 0x80) && *(esi_3 + 0x6c) == 5)
        sub_4a4100(arg1, eax_19[0xf], 0x11a0, 
            "cannot access w component from texcoord in general expression")
        break
    
    var_c_2 += 1
    edx_12 = &edx_12[1]
    
    if (var_c_2 u>= *(*(arg1 + 0x100) + 4))
        goto label_4b6ef0

return 0x80004005
