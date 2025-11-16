// 函数: sub_417040
// 地址: 0x417040
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2
int32_t var_8 = esi

if (data_131d2d0 == 0xffffffff || arg1 == 0)
    return 

int32_t i_4 = 4
data_131d314 = data_131310c
void* eax_2 = &data_131d3ec
data_131d2f0 = 1
data_131d2f4 = arg1
int32_t i

do
    if (*(eax_2 - 0xd4) == 0xffffffff)
        *eax_2 = 0
    else
        *eax_2 = 1
        *(eax_2 + 4) = 0xff
        *(eax_2 - 0xc) = 1
    
    if (*(eax_2 + 0x2e0) == 0xffffffff)
        *(eax_2 + 0x3b4) = 0
    else
        *(eax_2 + 0x3b4) = 1
        *(eax_2 + 0x3b8) = 0xff
        *(eax_2 + 0x3a8) = 1
    
    if (*(eax_2 + 0x694) == 0xffffffff)
        *(eax_2 + 0x768) = 0
    else
        *(eax_2 + 0x768) = 1
        *(eax_2 + 0x76c) = 0xff
        *(eax_2 + 0x75c) = 1
    
    if (*(eax_2 + 0xa48) == 0xffffffff)
        *(eax_2 + 0xb1c) = 0
    else
        *(eax_2 + 0xb1c) = 1
        *(eax_2 + 0xb20) = 0xff
        *(eax_2 + 0xb10) = 1
    
    eax_2 += 0xed0
    i = i_4
    i_4 -= 1
while (i != 1)

if (data_13130bc != i_4 || arg1 + 1 u> 4)
    data_131d2f4 = 0
else
    switch (arg1)
        case 1
            int32_t* ecx = &data_131d374
            int32_t i_7 = 0x10
            int32_t i_1
            
            do
                int32_t eax_4 = ecx[-0x17]
                
                if (eax_4 != data_131d2ec && eax_4 != 0xffffffff)
                    int32_t eax_5 = ecx[0x1f]
                    int32_t edx_1 = esi
                    ecx[3] = data_131310c
                    esi = var_8
                    *ecx = eax_5
                    ecx[-3] = 0
                    ecx[-2] = eax_5
                    ecx[6] = 0
                    
                    if (esi s< 0)
                        edx_1 = neg.d(esi)
                    
                    ecx[5] = edx_1
                    ecx[4] = 0
                    ecx[1] = 0
                    ecx[2] = 0
                    ecx[-1].b = 0
                
                ecx = &ecx[0xed]
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
        case 2
            int32_t edi_1 = data_131d2ec
            int32_t eax_6 = sub_416080(edi_1)
            void* eax_8
            
            if (eax_6 == 0xffffffff)
                eax_8 = &data_131d318
            else
                eax_8 = eax_6 * 0x3b4 + &data_131d318
            
            int32_t ecx_2 = *(eax_8 + 0x30)
            int32_t i_5 = 0x10
            int32_t eax_9 = *(eax_8 + 0x34)
            void* eax_10 = &data_131d374
            int32_t i_8 = 0x10
            int32_t i_2
            
            do
                int32_t ecx_3 = *(eax_10 - 0x5c)
                
                if (ecx_3 != edi_1 && ecx_3 != 0xffffffff)
                    int32_t ecx_4 = *(eax_10 + 0x7c)
                    int32_t edx_3 = esi
                    int32_t edi_2 = data_131310c
                    *(eax_10 + 0xc) = edi_2
                    *eax_10 = ecx_4
                    *(eax_10 - 0xc) = 0
                    *(eax_10 - 8) = ecx_4
                    *(eax_10 + 0x18) = 0
                    
                    if (esi s< 0)
                        edx_3 = neg.d(edx_3)
                    
                    *(eax_10 + 0x14) = edx_3
                    *(eax_10 + 0x10) = 0
                    *(eax_10 + 4) = 0
                    *(eax_10 + 8) = 0
                    *(eax_10 - 4) = 0
                    *(eax_10 + 0x88) = *(eax_10 + 0x80)
                    *(eax_10 + 0x8c) = *(eax_10 + 0x84)
                    *(eax_10 + 0x90) = ecx_2 - *(eax_10 - 0x2c)
                    *(eax_10 + 0x94) = eax_9 - *(eax_10 - 0x28)
                    int32_t ecx_11 = esi
                    *(eax_10 + 0x34) = edi_2
                    *(eax_10 + 0x28) = 0
                    *(eax_10 + 0x1c) = 0x59
                    *(eax_10 + 0x20) = 0
                    *(eax_10 + 0x40) = 0
                    
                    if (esi s< 0)
                        ecx_11 = neg.d(ecx_11)
                    
                    *(eax_10 + 0x3c) = ecx_11
                    int32_t ecx_12 = esi
                    *(eax_10 + 0x38) = 0
                    *(eax_10 + 0x2c) = 0x59
                    *(eax_10 + 0x30) = 0
                    *(eax_10 + 0x24) = 0
                    *(eax_10 + 0x5c) = edi_2
                    *(eax_10 + 0x50) = 0
                    *(eax_10 + 0x44) = 0x59
                    *(eax_10 + 0x48) = 0
                    *(eax_10 + 0x68) = 0
                    
                    if (esi s< 0)
                        ecx_12 = neg.d(ecx_12)
                    
                    i_5 = i_8
                    *(eax_10 + 0x64) = ecx_12
                    *(eax_10 + 0x60) = 0
                    *(eax_10 + 0x54) = 0x59
                    *(eax_10 + 0x58) = 0
                    *(eax_10 + 0x4c) = 0
                    edi_1 = data_131d2ec
                
                eax_10 += 0x3b4
                i_2 = i_5
                i_5 -= 1
                i_8 = i_5
            while (i_2 != 1)
        case 3
            void* eax_11 = &data_131d6cc
            int32_t i_6 = 4
            int32_t i_3
            
            do
                int32_t ecx_13 = *(eax_11 - 0x3b4)
                
                if (ecx_13 != data_131d2ec && ecx_13 != 0xffffffff)
                    *(eax_11 - 0x2c0) = 0
                
                int32_t ecx_14 = *eax_11
                
                if (ecx_14 != data_131d2ec && ecx_14 != 0xffffffff)
                    *(eax_11 + 0xf4) = 0
                
                int32_t ecx_15 = *(eax_11 + 0x3b4)
                
                if (ecx_15 != data_131d2ec && ecx_15 != 0xffffffff)
                    *(eax_11 + 0x4a8) = 0
                
                int32_t ecx_16 = *(eax_11 + 0x768)
                
                if (ecx_16 != data_131d2ec && ecx_16 != 0xffffffff)
                    *(eax_11 + 0x85c) = 0
                
                eax_11 += 0xed0
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
        case 0xffffffff
            data_131d2f4 = 0

sub_48d040(data_71929c, &data_7192a0)
data_71929c = 0x26
data_7192a0 = 0
data_7192e0 = 0
