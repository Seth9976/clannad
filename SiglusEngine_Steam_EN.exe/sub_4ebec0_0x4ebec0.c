// 函数: sub_4ebec0
// 地址: 0x4ebec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg4
char* var_8 = esi

if (esi == 0 || *esi == 0)
    return 

void* var_c = nullptr
int32_t var_1c = 0
void* i_4 = 0x800
sub_4d6960(arg1, &var_c, &var_1c, 0x800, "FORMAT_STR")
char* edi_1 = var_c
void* ebx_1 = nullptr

while (true)
    void* i = i_4
    void* eax = ebx_1 + 0x400
    
    if (eax s> i)
        do
            i_4 = i + 0x800
            sub_4d6ae0(eax, &var_c, &var_1c, i + 0x800)
            eax = var_c
            i = i_4
            edi_1 = ebx_1 + eax
        while (i s< ebx_1 + 0x400)
        
        esi = var_8
    
    i.b = *esi
    
    if (i.b == 0)
        break
    
    if (i.b u>= 0x80 && (i.b u< 0xa0 || i.b u> 0xdf) && i.b u< 0xfe)
        int32_t edx_2
        
        if (i.b u< 0xa0 || i.b u> 0xdf)
            edx_2 = zx.d(i.b) << 8 | zx.d(esi[1])
        else
            edx_2 = 0
        
        eax.b = esi[2]
        uint32_t eax_4
        
        if (eax.b u< 0x80)
            eax_4 = 0
        else if (eax.b u< 0xa0)
            if (eax.b u>= 0xfe)
                eax_4 = 0
            else
                eax_4 = zx.d(eax.b) << 8 | zx.d(esi[3])
        else if (eax.b u<= 0xdf || eax.b u>= 0xfe)
            eax_4 = 0
        else
            eax_4 = zx.d(eax.b) << 8 | zx.d(esi[3])
        
        int32_t var_24
        int32_t var_14
        int32_t var_10
        int32_t eax_10
        void* edx_8
        
        if (edx_2 != 0x8196)
            if (edx_2 == 0x8193 && eax_4 - 0x8260 u<= 0x19)
                sub_4ec270(&var_14, &arg4, esi, &var_14, &var_24, &var_10)
                int32_t edx_10 = var_24
                
                if (edx_10 != 0xffffffff)
                    if (edx_10 == 0xfffffffe)
                        goto label_4ec0f4
                    
                    int32_t ecx_12 = var_14
                    eax_10 = (ecx_12 << 5) + edx_10
                    edx_8 = ecx_12 + &data_710418
                    goto label_4ec0e0
                
                void* esi_6 = var_14 * 0x21 + &data_710418
                sub_4cfd70(edi_1, esi_6)
                void* ecx_11 = esi_6 + 1
                char i_1
                
                do
                    i_1 = *esi_6
                    esi_6 += 1
                while (i_1 != 0)
                int32_t esi_7 = esi_6 - ecx_11
                edi_1 = &edi_1[esi_7]
                var_10 = esi_7
                ebx_1 += esi_7
                esi = arg4
                var_8 = esi
                continue
        else if (eax_4 - 0x8260 u<= 0x19)
            sub_4ec270(&var_14, &arg4, esi, &var_14, &var_24, &var_10)
            int32_t edx_6 = var_24
            
            if (edx_6 != 0xffffffff)
                if (edx_6 == 0xfffffffe)
                    goto label_4ec0f4
                
                int32_t ecx_7 = var_14
                eax_10 = (ecx_7 << 5) + edx_6
                edx_8 = ecx_7 + &data_132a150
            label_4ec0e0:
                int32_t esi_8 = var_10
                sub_4cfdc0(eax_10, edx_8 + eax_10, edi_1, esi_8)
                edi_1 = &edi_1[esi_8]
                ebx_1 += esi_8
            label_4ec0f4:
                esi = arg4
                var_8 = esi
                continue
            else
                void* esi_3 = var_14 * 0x21 + &data_132a150
                sub_4cfd70(edi_1, esi_3)
                void* ecx_6 = esi_3 + 1
                char i_2
                
                do
                    i_2 = *esi_3
                    esi_3 += 1
                while (i_2 != 0)
                int32_t esi_4 = esi_3 - ecx_6
                edi_1 = &edi_1[esi_4]
                var_10 = esi_4
                ebx_1 += esi_4
                esi = arg4
                var_8 = esi
                continue
        *edi_1 = i.b
        eax_4.b = esi[1]
        esi = &esi[2]
        edi_1[1] = eax_4.b
        edi_1 = &edi_1[2]
        var_8 = esi
        ebx_1 += 2
        arg4 = esi
        continue
    
    if (i.b == 0x23 && esi[1] == i.b && esi[2] == i.b && esi[3] == 0x50 && esi[4] == 0x52
            && esi[5] == 0x49 && esi[6] == 0x4e && esi[7] == 0x54 && esi[8] == 0x28)
        arg4 = &esi[8]
        int32_t var_40_1 = 0
        int32_t var_3c_1 = 0
        BOOL var_18 = 0
        int32_t var_28 = 0
        char** edx_13 = &arg4
        int32_t var_44
        int32_t* eax_18 = &var_44
        uint32_t var_54_5 = &var_44
        
        if (sub_4eefd0(&esi[8]) != 0)
            char** eax_19
            int32_t ecx_16
            eax_19, ecx_16 = sub_4ef190(eax_18, edx_13, &esi[8], U"%", var_54_5)
            int32_t var_5c_4 = ecx_16
            sub_4ebe20(eax_19, &var_18, &var_28, var_44)
        else
            sub_4ef190(eax_18, edx_13, &esi[8], U"&%", var_54_5)
            sub_4ebec0(var_3c_1)
        
        BOOL edx_15 = var_18
        
        if (edx_15 != 0)
            BOOL esi_9 = edx_15
            int32_t ecx_18 = esi_9 + 1
            char i_3
            
            do
                i_3 = *esi_9
                esi_9 += 1
            while (i_3 != 0)
            int32_t esi_10 = esi_9 - ecx_18
            
            if (esi_9 != ecx_18)
                sub_4cfd70(edi_1, edx_15)
                edi_1 = &edi_1[esi_10]
                ebx_1 += esi_10
        
        sub_4d6c40(&var_28, &var_18)
        sub_4eef40(&var_44, 1)
        esi = arg4
        var_8 = esi
        continue
    
    esi = &esi[1]
    *edi_1 = i.b
    edi_1 = &edi_1[1]
    var_8 = esi
    arg4 = esi
    ebx_1 += 1

*edi_1 = 0
sub_4d6ae0(ebx_1 + 1, &var_c, &var_1c, ebx_1 + 1)
*arg3 = var_1c
*arg2 = var_c
