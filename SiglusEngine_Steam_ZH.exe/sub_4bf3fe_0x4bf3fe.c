// 函数: sub_4bf3fe
// 地址: 0x4bf3fe
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_10 = 0

if (*(arg1 + 0x4c) != 4)
    return 0x80004005

int32_t edi
int32_t var_3c_1 = edi
int32_t var_20 = 0
void var_1c
void* edi_1 = &var_1c
*edi_1 = 0
void* edi_2 = edi_1 + 4
*edi_2 = 0
*(edi_2 + 4) = 0
int32_t var_30 = 0
void var_2c
void* edi_5 = &var_2c
*edi_5 = 0
void* edi_6 = edi_5 + 4
*edi_6 = 0
int32_t var_8_1 = 0
*(edi_6 + 4) = 0
int32_t i = 0

do
    int32_t* eax_3 = *(arg1 + 0x230) + (i << 2)
    int32_t* edx_1 = *eax_3
    
    if (edx_1 != 0)
        int32_t ecx_1 = *edx_1
        
        if (ecx_1 != 0)
            int32_t edi_10 = *edx_1
            
            if ((edi_10 & 0xfff00000) == 0x72100000)
                (&var_20)[i] = *eax_3
            else
                int32_t ebx_3 = 0
                
                if ((ecx_1 & 0xfff00000) != 0x11000000)
                    ebx_3 = edi_10 & 0xfffff
                
                int32_t ecx_7 = *eax_3
                
                if (*(*(*(arg1 + 0x14) + (*(edx_1[2] + (ebx_3 << 2)) << 2)) + 4) != *(arg1 + 0x88))
                    (&var_20)[i] = ecx_7
                else
                    int32_t edx_3 = var_8_1
                    var_8_1 += 1
                    (&var_30)[edx_3] = ecx_7
            
            *eax_3 = 0
    
    i += 1
while (i u< *(arg1 + 0x4c))

int32_t i_1 = 0
int32_t result

if (*(arg1 + 0x4c) u> 0)
    do
        int32_t* eax_6 = *(arg1 + 0x22c) + (i_1 << 2)
        int32_t* ecx_8 = *eax_6
        
        if (ecx_8 != 0)
            int32_t ecx_9 = *ecx_8
            
            if (ecx_9 != 0 && (ecx_9 & 0xfff00000) != 0x72100000)
                int32_t __saved_ebp
                
                if ((&__saved_ebp)[i_1 - 7] != 0)
                    result = 0x80004005
                    goto label_4bf615
                
                (&__saved_ebp)[i_1 - 7] = *eax_6
                *eax_6 = 0
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0x4c))

if (zx.d((*(arg1 + 0xc8)).w) u> 0x101)
    result = sub_4bc8b5(arg1, &var_30, var_8_1, &var_20, 1)

if (zx.d((*(arg1 + 0xc8)).w) u> 0x101 && result s< 0)
label_4bf615:
    
    if (var_10 == 0)
        uint32_t var_40_4 = zx.d((*(arg1 + 0xc8)).b)
        sub_4a4100(arg1, nullptr, 0x11ab, 
            "shader cannot compile to a ps_1_%i shader because this model can't match all the dependent "
        "texture read(s) this shader requires")
else
    result = sub_4bc8b5(arg1, &var_30, var_8_1, &var_20, 2)
    
    if (result s< 0)
        goto label_4bf615
    
    result = sub_4bc8b5(arg1, &var_30, var_8_1, &var_20, 3)
    
    if (result s< 0)
        goto label_4bf615
    
    result = sub_4bc3e1(arg1, &var_30, var_8_1, &var_20)
    
    if (result s< 0)
        goto label_4bf615
    
    int32_t i_2 = 0
    
    if (*(arg1 + 0x4c) u> 0)
        do
            void* eax_14 = (&var_30)[i_2]
            
            if (eax_14 != 0)
                uint32_t var_40_2 = zx.d((*(arg1 + 0xc8)).b)
                result = 0x80004005
                sub_4a4100(arg1, *(eax_14 + 0x3c), 0x11ab, 
                    "cannot map this dependent texture read to ps_1_%i")
                var_10 = 1
            
            i_2 += 1
        while (i_2 u< *(arg1 + 0x4c))
    
    if (result != 0x80004005)
        int32_t i_3 = 0
        
        if (*(arg1 + 0x4c) u> 0)
            do
                *(*(arg1 + 0x230) + (i_3 << 2)) = (&var_20)[i_3]
                i_3 += 1
            while (i_3 u< *(arg1 + 0x4c))
        
        j__free(*(arg1 + 0x22c))
        *(arg1 + 0x22c) = 0
        *(arg1 + 0x220) = 0
        result = 0
    
    if (result s< 0)
        goto label_4bf615

return result
