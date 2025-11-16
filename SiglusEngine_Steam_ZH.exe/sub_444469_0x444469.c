// 函数: sub_444469
// 地址: 0x444469
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
int32_t edi
int32_t var_38 = edi
int32_t* eax = *(esi + 0x104)

if (eax != 0)
    (*(*eax + 8))(eax)
    *(esi + 0x104) = 0

arg1 = nullptr

if (*(esi + 0xa0) u> 0)
    void* edi_2 = nullptr
    void* var_8_1 = nullptr
    
    while (true)
        int32_t* eax_2 = *(esi + 0xa4) + edi_2 + 0x88
        
        if (*eax_2 != 0)
            int32_t* eax_3 = *eax_2
            (*(*eax_3 + 8))(eax_3)
            *(*(esi + 0xa4) + edi_2 + 0x88) = 0
        
        int32_t* edi_3 = edi_2 + 0x8c
        int32_t i_2 = 2
        int32_t i
        
        do
            int32_t* eax_6 = edi_3 + *(esi + 0xa4) + 8
            
            if (*eax_6 != 0)
                int32_t* eax_7 = *eax_6
                (*(*eax_7 + 8))(eax_7)
                *(edi_3 + *(esi + 0xa4) + 8) = 0
            
            int32_t* eax_10 = *(esi + 0xa4) + edi_3
            
            if (*eax_10 != 0)
                int32_t* eax_11 = *eax_10
                (*(*eax_11 + 8))(eax_11)
                *(edi_3 + *(esi + 0xa4)) = 0
            
            edi_3 = &edi_3[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
        arg1 += 1
        var_8_1 += 0xb4
        
        if (arg1 u>= *(esi + 0xa0))
            break
        
        edi_2 = var_8_1

arg1 = nullptr
void var_2c
int32_t var_20

if (*(esi + 0x14) u> 0)
    int32_t edi_4 = 0
    
    do
        int32_t* eax_15 = *(esi + 0x18) + edi_4
        int32_t ecx_5 = *eax_15
        
        if ((ecx_5 == 5 || ecx_5 == 6 || ecx_5 == 7 || ecx_5 == 8 || ecx_5 == 9) && eax_15[1] != 0)
            int32_t* eax_16 = eax_15[1]
            (*(*eax_16 + 0x44))(eax_16, 0, &var_2c)
            
            if (var_20 == 0)
                int32_t* eax_18 = *(esi + 0x18) + edi_4 + 4
                
                if (*eax_18 != 0)
                    int32_t* eax_19 = *eax_18
                    (*(*eax_19 + 8))(eax_19)
                    *(*(esi + 0x18) + edi_4 + 4) = 0
        
        arg1 += 1
        edi_4 += 0x18
    while (arg1 u< *(esi + 0x14))

arg1 = nullptr

if (*(esi + 0xd0) u> 0)
    do
        for (void* j = *(*(esi + 0xd8) + (arg1 << 2)); j != 0; j = *(j + 0x18))
            int32_t k = 0
            
            if (*(j + 0x10) u> 0)
                do
                    int32_t ebx_2 = k << 3
                    int32_t* eax_24 = *(j + 0x14) + ebx_2
                    int32_t ecx_9 = *eax_24
                    
                    if ((ecx_9 == 5 || ecx_9 == 6 || ecx_9 == 7 || ecx_9 == 8 || ecx_9 == 9)
                            && eax_24[1] != 0)
                        int32_t* eax_26 = *(ebx_2 + *(j + 0x14) + 4)
                        (*(*eax_26 + 0x44))(eax_26, 0, &var_2c)
                        
                        if (var_20 == 0)
                            int32_t eax_27 = *(j + 0x14)
                            
                            if (*(ebx_2 + eax_27 + 4) != 0)
                                int32_t* eax_28 = *(ebx_2 + eax_27 + 4)
                                (*(*eax_28 + 8))(eax_28)
                                *(ebx_2 + *(j + 0x14) + 4) = 0
                    
                    k += 1
                while (k u< *(j + 0x10))
        
        arg1 += 1
    while (arg1 u< *(esi + 0xd0))

for (void* i_1 = *(esi + 0xf8); i_1 != 0; i_1 = *(i_1 + 0x18))
    arg1 = nullptr
    
    if (*(i_1 + 0x10) u> 0)
        do
            int32_t edi_6 = arg1 << 3
            int32_t* eax_33 = *(i_1 + 0x14) + edi_6
            int32_t ecx_12 = *eax_33
            
            if ((ecx_12 == 5 || ecx_12 == 6 || ecx_12 == 7 || ecx_12 == 8 || ecx_12 == 9)
                    && eax_33[1] != 0)
                int32_t* eax_35 = *(edi_6 + *(i_1 + 0x14) + 4)
                (*(*eax_35 + 0x44))(eax_35, 0, &var_2c)
                
                if (var_20 == 0)
                    int32_t eax_36 = *(i_1 + 0x14)
                    
                    if (*(edi_6 + eax_36 + 4) != 0)
                        int32_t* eax_37 = *(edi_6 + eax_36 + 4)
                        (*(*eax_37 + 8))(eax_37)
                        *(edi_6 + *(i_1 + 0x14) + 4) = 0
            
            arg1 += 1
        while (arg1 u< *(i_1 + 0x10))

return 0
