// 函数: sub_7317f0
// 地址: 0x7317f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t* ebx = esi[0x6c]
arg1 = ebx

if (*(esi + 0xc9) == 0)
    if (esi[0x5e] != 0 || esi[0x60] != 0 || esi[0x61] != 0)
        *(*esi + 0x14) = 0x7d
        (*(*esi + 4))(esi, 0xffffffff)
    else
        int32_t eax_28 = esi[0x5f]
        
        if (eax_28 s< 0x40 && eax_28 != esi[0x64])
            *(*esi + 0x14) = 0x7d
            (*(*esi + 4))(esi, 0xffffffff)
    
    ebx[1] = sub_7314a0
else
    int32_t eax_1 = esi[0x5e]
    bool cond:1_1
    
    if (eax_1 != 0)
        int32_t ecx_1 = esi[0x5f]
        
        if (ecx_1 s>= eax_1 && ecx_1 s<= esi[0x64])
            cond:1_1 = esi[0x4c] != 1
            goto label_73183d
        
    label_73185e:
        *(*esi + 0x14) = 0x11
        *(*esi + 0x18) = esi[0x5e]
        *(*esi + 0x1c) = esi[0x5f]
        *(*esi + 0x20) = esi[0x60]
        *(*esi + 0x24) = esi[0x61]
        (**esi)(esi)
    else
        cond:1_1 = esi[0x5f] != eax_1
    label_73183d:
        
        if (cond:1_1)
            goto label_73185e
        
        int32_t eax_2 = esi[0x60]
        
        if ((eax_2 != 0 && eax_2 - 1 != esi[0x61]) || esi[0x61] s> 0xd)
            goto label_73185e
    int32_t i = 0
    int32_t i_2 = 0
    
    if (esi[0x4c] s> 0)
        void* eax_11 = &esi[0x4d]
        void* var_10_1 = eax_11
        
        do
            int32_t ecx_6 = *(*eax_11 + 4)
            int32_t* ebx_3 = (ecx_6 << 8) + esi[0x23]
            int32_t var_c_1 = ecx_6
            
            if (esi[0x5e] != 0 && *ebx_3 s< 0)
                *(*esi + 0x14) = 0x76
                *(*esi + 0x18) = ecx_6
                *(*esi + 0x1c) = 0
                (*(*esi + 4))(esi, 0xffffffff)
                ecx_6 = var_c_1
                i = i_2
            
            int32_t j = esi[0x5e]
            
            if (j s<= esi[0x5f])
                int32_t ecx_7 = ecx_6
                
                do
                    int32_t eax_18 = ebx_3[j]
                    
                    if (eax_18 s< 0)
                        eax_18 = 0
                    
                    if (esi[0x60] != eax_18)
                        *(*esi + 0x14) = 0x76
                        *(*esi + 0x18) = ecx_7
                        *(*esi + 0x1c) = j
                        (*(*esi + 4))(esi, 0xffffffff)
                    
                    ecx_7 = var_c_1
                    ebx_3[j] = esi[0x61]
                    j += 1
                while (j s<= esi[0x5f])
                
                i = i_2
            
            i += 1
            eax_11 = var_10_1 + 4
            i_2 = i
            var_10_1 = eax_11
        while (i s< esi[0x4c])
        
        ebx = arg1
    
    if (esi[0x60] != 0)
        int32_t (* eax_27)(int16_t* arg1, int32_t* arg2) = sub_731310
        
        if (esi[0x5e] == 0)
            eax_27 = sub_731290
        
        ebx[1] = eax_27
    else
        int32_t (* eax_26)(int32_t arg1, int32_t* arg2) = sub_7310b0
        
        if (esi[0x5e] == 0)
            eax_26 = sub_730ed0
        
        ebx[1] = eax_26

int32_t i_1 = 0
int32_t i_3 = 0

if (esi[0x4c] s> 0)
    void* eax_32 = &esi[0x4d]
    void* ebx_4 = &ebx[9]
    void* var_10_2 = eax_32
    
    do
        void* eax_33 = *eax_32
        
        if (*(esi + 0xc9) == 0)
        label_731a40:
            int32_t edi_1 = *(eax_33 + 0x14)
            
            if (edi_1 s< 0 || edi_1 s>= 0x10)
                *(*esi + 0x14) = 0x32
                *(*esi + 0x18) = edi_1
                (**esi)(esi)
            
            int32_t* eax_41 = arg1
            
            if (eax_41[edi_1 + 0xe] == 0)
                arg1[edi_1 + 0xe] = (*esi[1])(esi, 1, 0x40)
                eax_41 = arg1
            
            _memset(eax_41[edi_1 + 0xe], 0, 0x40)
            i_1 = i_3
            *(ebx_4 - 0x10) = 0
            *ebx_4 = 0
        else if (esi[0x5e] == 0 && esi[0x60] == 0)
            goto label_731a40
        
        if (*(esi + 0xc9) != 0)
            if (esi[0x5e] != 0)
            label_731ac6:
                int32_t edi_2 = *(eax_33 + 0x18)
                
                if (edi_2 s< 0 || edi_2 s>= 0x10)
                    *(*esi + 0x14) = 0x32
                    *(*esi + 0x18) = edi_2
                    (**esi)(esi)
                
                int32_t* eax_49 = arg1
                
                if (eax_49[edi_2 + 0x1e] == 0)
                    arg1[edi_2 + 0x1e] = (*esi[1])(esi, 1, 0x100)
                    eax_49 = arg1
                
                _memset(eax_49[edi_2 + 0x1e], 0, 0x100)
                i_1 = i_3
        else if (esi[0x64] != 0)
            goto label_731ac6
        
        i_1 += 1
        eax_32 = var_10_2 + 4
        i_3 = i_1
        ebx_4 += 4
        var_10_2 = eax_32
    while (i_1 s< esi[0x4c])
    
    ebx = arg1

ebx[2] = 0
ebx[3] = 0
ebx[4] = 0xfffffff0
int32_t result = esi[0x3f]
ebx[0xd] = result
return result
