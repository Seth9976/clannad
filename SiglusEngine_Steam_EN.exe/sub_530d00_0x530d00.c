// 函数: sub_530d00
// 地址: 0x530d00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_a0
int32_t eax_1 = __security_cookie ^ &var_a0
int32_t eax_2 = data_1bfdd30
char** eax_4
int32_t* edx_1

if (eax_2 == 0x5be)
    eax_4 = sub_4ef190(eax_2 - 0x5be, arg2 + 0x20, *(arg2 + 0x20), "$%$", &data_1b8a720)
    data_715e98 = 0
    edx_1 = nullptr
else
    eax_4 = eax_2 - 0x5bf
    int32_t* var_94
    
    if (eax_2 != 0x5bf)
        edx_1 = var_94
    else
        eax_4 = sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "$%$", &data_1b8a720)
        edx_1 = 1

int32_t esi = data_1b8a748
var_a0 = edx_1

if (esi s> 0)
    int32_t ecx_4 = data_1b8a740
    int32_t var_98_1 = ecx_4
    
    if (esi s> 0x20)
        esi = 0x20
    
    eax_4 = data_1b8a744
    char** var_9c_1 = eax_4
    
    if (ecx_4 s>= 0x82)
    label_530f01:
        
        if (edx_1 != 0)
            if (data_702fc0 != 0)
                int32_t var_bc_2 = 0x61f670
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_4, data_72d6ac, data_719b6c, &data_61f6b0, 0x61f670), 
                        data_72d6ac, data_719b6c, &data_61f6b0, 0x61f670), 
                    data_72d6ac, data_719b6c, &data_61f6b0, 0x61f670)
                eax_4 = sub_4a1e40(3)
        else if (data_702fc0 != edx_1)
            int32_t var_bc_1 = 0x61f670
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_4, data_72d6ac, data_719b6c, &data_61f694, 0x61f670), 
                    data_72d6ac, data_719b6c, &data_61f694, 0x61f670), 
                data_72d6ac, data_719b6c, &data_61f694, 0x61f670)
            eax_4 = sub_4a1e40(3)
    else
        int32_t edi_1 = (&data_63ecb0)[ecx_4]
        
        if (edi_1 s<= 0 || eax_4 s< 0 || eax_4 s>= edi_1)
            goto label_530f01
        
        edx_1 = var_a0
        
        if (eax_4 - 1 + esi s< 0 || eax_4 - 1 + esi s>= edi_1)
            goto label_530f01
        
        if (edx_1 == 0)
            void* edi_2 = nullptr
            
            if (esi s> 0)
                do
                    sub_4e8000(eax_4, edi_2 + eax_4, ecx_4, 0, &data_704898)
                    eax_4 = var_9c_1
                    edi_2 += 1
                    ecx_4 = var_98_1
                while (edi_2 s< esi)
                
                edx_1 = var_a0
        
        int32_t ecx_11 = data_1b8a720
        
        if (ecx_11 u<= 0x100)
            int32_t var_90[0x21]
            
            if (edx_1 != 0)
                void* edi_4 = nullptr
                
                if (esi s> 0)
                    var_a0 = &var_90
                    int32_t* ecx_8 = &var_90
                    
                    do
                        sub_4e76e0(eax_4, edi_4 + eax_4, var_98_1, ecx_8, &data_704898)
                        edi_4 += 1
                        eax_4 = var_9c_1
                        ecx_8 = &var_a0[1]
                        var_a0 = ecx_8
                    while (edi_4 s< esi)
                    
                    ecx_11 = data_1b8a720
                
                int32_t var_ac_2 = esi
                uint8_t* eax_5 = sub_497320(eax_4, &var_90, ecx_11, ecx_11)
                sub_5f02dd(eax_1 ^ &var_a0)
                return eax_5
            
            int32_t var_ac_1 = esi
            int32_t var_b0_1 = ecx_11
            eax_4 = sub_4972e0(eax_4, &var_90, ecx_11)
            
            if (eax_4.b != 0)
                void* edi_3 = nullptr
                
                if (esi s> 0)
                    do
                        eax_4 = sub_4e8000(eax_4, edi_3 + var_9c_1, var_98_1, var_90[edi_3], 
                            &data_704898)
                        edi_3 += 1
                    while (edi_3 s< esi)
                
                data_715e98 = 1
                sub_5f02dd(eax_1 ^ &var_a0)
                return eax_4

sub_5f02dd(eax_1 ^ &var_a0)
return eax_4
