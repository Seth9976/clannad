// 函数: sub_56c610
// 地址: 0x56c610
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t i_5 = data_20d19c0
void* eax = &data_20d19d0

if (i_5 s> 0)
    int32_t i_3 = i_5
    void* esi_1 = &data_72d6bc
    int32_t edi = data_1392710
    int32_t i
    
    do
        int32_t j_1 = 2
        int32_t j
        
        do
            if (*esi_1 != 0 || *(esi_1 + 0x650) != 0)
                *(eax + 8) = 0
            else
                if (*(eax + 8) == 0)
                    *(eax + 0xc) = edi
                    *(eax + 8) = 1
                
                if (*(eax + 8) == 1 && edi - *(eax + 0xc) u>= 0x7d0)
                    *(eax + 8) = 2
            
            eax += 0x10
            j = j_1
            j_1 -= 1
        while (j != 1)
        esi_1 += 0xca0
        i = i_3
        i_3 -= 1
    while (i != 1)
    i_5 = data_20d19c0

int32_t edx_1 = data_1318c24
WPARAM ecx_3 = 0
void* eax_1 = &data_20d59d0

if (edx_1 == 0)
    int32_t i_1 = 0
    
    if (i_5 s> 0)
        int32_t edi_3 = data_1318c2c
        void* esi_4 = &data_20d19e8
        
        do
            if (edi_3 != 0)
                goto label_56c787
            
            int32_t edi_4 = *(esi_4 - 0x10)
            
            if (edi_4 == 0 || edi_4 == 1)
                edi_3 = data_1318c2c
            label_56c787:
                *eax_1 = i_1
                ecx_3 += 1
                *(eax_1 + 4) = 0
                *(eax_1 + 8) = 0xffffffff
                eax_1 += 0x18
                
                if (edi_3 == 0)
                    goto label_56c79f
                
            label_56c7aa:
                *eax_1 = i_1
                ecx_3 += 1
                *(eax_1 + 4) = 1
                *(eax_1 + 8) = 0xffffffff
                eax_1 += 0x18
            else
            label_56c79f:
                int32_t edi_5 = *esi_4
                
                if (edi_5 == 0 || edi_5 == 1)
                    goto label_56c7aa
            
            edi_3 = data_1318c2c
            i_1 += 1
            esi_4 += 0x20
        while (i_1 s< data_20d19c0)
else if (edx_1 == 1)
    int32_t edx_5 = 0
    
    if (i_5 s> 0)
        void* eax_3 = &data_20d59d8
        void* esi_3 = &data_20d19d8
        
        do
            if (data_1318c2c != 0)
                goto label_56c742
            
            int32_t edi_2 = *esi_3
            
            if (edi_2 == 0)
                i_5 = data_20d19c0
            label_56c742:
                *(eax_3 - 8) = edx_5
                ecx_3 += 1
                *(eax_3 - 4) = 0
                *eax_3 = 0xffffffff
                eax_3 += 0x18
            else
                i_5 = data_20d19c0
                
                if (edi_2 == 1)
                    goto label_56c742
            
            edx_5 += 1
            esi_3 += 0x20
        while (edx_5 s< i_5)
else
    int32_t edx_4 = edx_1 - 2
    
    if (edx_1 == 2 && i_5 s> 0)
        void* eax_2 = &data_20d59d8
        void* esi_2 = &data_20d19e8
        
        do
            if (data_1318c2c != 0)
                goto label_56c6e3
            
            int32_t edi_1 = *esi_2
            
            if (edi_1 == 0)
                i_5 = data_20d19c0
            label_56c6e3:
                *(eax_2 - 8) = edx_4
                ecx_3 += 1
                *(eax_2 - 4) = 1
                *eax_2 = 0xffffffff
                eax_2 += 0x18
            else
                i_5 = data_20d19c0
                
                if (edi_1 == 1)
                    goto label_56c6e3
            
            edx_4 += 1
            esi_2 += 0x20
        while (edx_4 s< i_5)

data_20d19c8 = ecx_3
void* result = ecx_3 * 0x18 + &data_20d59d0

if (ecx_3 s< 0x400)
    int32_t i_4 = 0x400 - ecx_3
    int32_t i_2
    
    do
        *result = 0xffffffff
        result += 0x18
        __builtin_memset(result - 0x14, 0xff, 0x14)
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

int32_t edx_6 = data_20db9d0

if (edx_6 == ecx_3)
    return result

sub_56c3a0(result, edx_6, data_1af0a6c, ecx_3)
HWND ecx_5 = data_1af0a6c
data_20db9d0 = data_20d19c8
data_13156d0 = 0
data_13156d4 = 0xffffffff
return sub_4c15d0(ecx_5)
