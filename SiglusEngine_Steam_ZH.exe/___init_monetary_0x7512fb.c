// 函数: ___init_monetary
// 地址: 0x7512fb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_c = nullptr
void** var_18 = arg1
int32_t var_14 = 0
int32_t* var_8_1
void** esi
int32_t* edi_1

if (arg1[0x2b] != 0 || arg1[0x2c] != 0)
    void** eax_1 = sub_74cccf(1, 0x50)
    
    if (eax_1 == 0)
        return 1
    
    int32_t* eax_2 = sub_74cd17(4)
    var_8_1 = eax_2
    
    if (eax_2 == 0)
        _free(eax_1)
        return 1
    
    *eax_2 = 0
    
    if (arg1[0x2b] == 0)
        __builtin_memcpy(eax_1, &data_b4c190, 0x50)
    else
        int32_t* eax_3 = sub_74cd17(4)
        var_c = eax_3
        
        if (eax_3 == 0)
            _free(eax_1)
            _free(eax_2)
            return 1
        
        *eax_3 = 0
        int32_t edi_3 = arg1[0x2b]
        int32_t esi_5 = sub_74d4e6(&var_18, 1, edi_3, 0x15, &eax_1[3])
            | sub_74d4e6(&var_18, 1, edi_3, 0x14, &eax_1[4])
            | sub_74d4e6(&var_18, 1, edi_3, 0x16, &eax_1[5])
            | sub_74d4e6(&var_18, 1, edi_3, 0x17, &eax_1[6])
        int32_t esi_8 = esi_5 | sub_74d4e6(&var_18, 1, edi_3, 0x18, &eax_1[7])
            | sub_74d4e6(&var_18, 1, edi_3, 0x50, &eax_1[8])
            | sub_74d4e6(&var_18, 1, edi_3, 0x51, &eax_1[9])
        int32_t esi_11 = esi_8 | sub_74d4e6(&var_18, 0, edi_3, 0x1a, &eax_1[0xa])
            | sub_74d4e6(&var_18, 0, edi_3, 0x19, eax_1 + 0x29)
            | sub_74d4e6(&var_18, 0, edi_3, 0x54, eax_1 + 0x2a)
        int32_t esi_14 = esi_11 | sub_74d4e6(&var_18, 0, edi_3, 0x55, eax_1 + 0x2b)
            | sub_74d4e6(&var_18, 0, edi_3, 0x56, &eax_1[0xb])
            | sub_74d4e6(&var_18, 0, edi_3, 0x57, eax_1 + 0x2d)
        int32_t esi_17 = esi_14 | sub_74d4e6(&var_18, 0, edi_3, 0x52, eax_1 + 0x2e)
            | sub_74d4e6(&var_18, 0, edi_3, 0x53, eax_1 + 0x2f)
            | sub_74d4e6(&var_18, 2, edi_3, 0x15, &eax_1[0xe])
        int32_t esi_20 = esi_17 | sub_74d4e6(&var_18, 2, edi_3, 0x14, &eax_1[0xf])
            | sub_74d4e6(&var_18, 2, edi_3, 0x16, &eax_1[0x10])
            | sub_74d4e6(&var_18, 2, edi_3, 0x17, &eax_1[0x11])
        int32_t esi_21 = esi_20 | sub_74d4e6(&var_18, 2, edi_3, 0x50, &eax_1[0x12])
        
        if ((sub_74d4e6(&var_18, 2, edi_3, 0x51, &eax_1[0x13]) | esi_21) != 0)
            ___free_lconv_mon(eax_1)
            _free(eax_1)
            _free(var_8_1)
            _free(var_c)
            return 1
        
        char* edx_2 = eax_1[7]
        
        while (*edx_2 != 0)
            int32_t eax_64
            eax_64.b = *edx_2
            
            if (eax_64.b s>= 0x30 && eax_64.b s<= 0x39)
                eax_64.b -= 0x30
                *edx_2 = eax_64.b
            else if (eax_64.b == 0x3b)
                char* esi_22 = edx_2
                
                do
                    eax_64.b = esi_22[1]
                    *esi_22 = eax_64.b
                    esi_22 = &esi_22[1]
                while (*esi_22 != 0)
                
                continue
            
            edx_2 = &edx_2[1]
    
    esi = eax_1
    edi_1 = var_c
    *esi = *arg1[0x21]
    esi[1] = *(arg1[0x21] + 4)
    esi[2] = *(arg1[0x21] + 8)
    esi[0xc] = *(arg1[0x21] + 0x30)
    esi[0xd] = *(arg1[0x21] + 0x34)
    *var_8_1 = 1
    
    if (edi_1 != 0)
        *edi_1 = 1
else
    edi_1 = nullptr
    var_8_1 = nullptr
    esi = &data_b4c190

int32_t* edx_3 = arg1[0x20]

if (edx_3 != 0)
    *edx_3
    *edx_3 -= 1

int32_t* eax_79 = arg1[0x1e]

if (eax_79 != 0)
    int32_t ecx_8 = *eax_79
    *eax_79 -= 1
    
    if (ecx_8 == 1)
        _free(arg1[0x21])
        _free(arg1[0x1e])

arg1[0x1e] = var_8_1
arg1[0x20] = edi_1
arg1[0x21] = esi
return 0
