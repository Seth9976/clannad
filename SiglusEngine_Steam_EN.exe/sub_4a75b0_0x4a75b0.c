// 函数: sub_4a75b0
// 地址: 0x4a75b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1372c24.b == 0)
    return 

void* eax = data_1372c20

if (eax u> 7)
    return 

char var_6_1 = 0
int32_t eax_2 = eax * 0xfcc + 0x129aa8c
int32_t* eax_3 = data_71929c

if (eax_3 == 0x22 || eax_3 == 0x23 || eax_3 == 0x24)
    var_6_1 = 1

int32_t* esi_1 = data_1372c28

if (esi_1 u<= 0x1ff)
    eax_3 = sub_425430(esi_1, 1)
    
    if (*(esi_1 * 0x74 + 0x13747b0) != 0)
        eax_3 = sub_427c30(esi_1 * 0x74 + 0x13747b0, 0x1372d58)

sub_41cd30(eax_3, 0x1372de4, 0x1372d58, nullptr, nullptr)
int32_t edx_1 = eax_2
void* i = nullptr
void* esi_2 = &data_1372f88

do
    if (*(edx_1 + i * 0x14 + 0x64) != 0)
        void* eax_5 = i * 5
        int32_t ecx_5
        int32_t edx_2
        
        if (*(edx_1 + i * 0x14 + 0x2e4) != 0)
            ecx_5 = *(edx_1 + (eax_5 << 2) + 0x2e8)
            edx_2 = *(edx_1 + (eax_5 << 2) + 0x2ec)
        else
            ecx_5 = *(edx_1 + (eax_5 << 2) + 0x68)
            edx_2 = *(edx_1 + (eax_5 << 2) + 0x6c)
        
        *(esi_2 - 0xcc) = data_1372da4
        int32_t eax_6
        eax_6.b = data_1372da0
        *(esi_2 - 0xd0) = eax_6.b
        
        if (data_1372dcc != data_1372e58)
            *(esi_2 - 0xa4) += 1
        
        char var_5_1 = 0
        *(esi_2 - 0x114) = data_1372d5c + ecx_5
        int32_t ecx_6 = 0
        int32_t var_c_1 = 0
        *(esi_2 - 0x110) = data_1372d60 + edx_2
        int32_t eax_13
        
        if (i u> 0xf)
        label_4a774a:
            
            if (i - 5 u<= 7)
                uint32_t edx_3 = zx.d(*(i + 0x703768))
                
                if (edx_3 u<= 7)
                    *esi_2 = *(((edx_3 + ((i - 5) << 3)) << 2) + &data_1372c58)
        else
            switch (i)
                case nullptr
                    *esi_2 = data_1372c30.d
                case 1
                    *esi_2 = data_1372c30:4
                case 2
                    *esi_2 = data_1372c30:8
                case 3
                    *esi_2 = data_1372c30:0xc
                case 4
                    *esi_2 = data_1372c40.d
                case 5, 6, 7, 8, 9, 0xa, 0xb, 0xc
                    goto label_4a774a
                case 0xd
                    eax_13 = data_1372c40:4
                    
                    if (data_1af17b8 != 0)
                        eax_13 = data_1372c40:8
                    
                    *esi_2 = eax_13
                case 0xe
                    eax_13 = data_1372c40:0xc
                    
                    if (data_13132f8 != 0)
                        eax_13 = data_1372c50
                    
                    *esi_2 = eax_13
                case 0xf
                    *esi_2 = data_1372c54
        
        if (*esi_2 == 0xffffffff)
            int32_t eax_16 = data_1372c2c
            
            if (eax_16 != 0xffffffff)
                ecx_6 = i << 3
                var_5_1 = 1
                var_c_1 = ecx_6
                *esi_2 = eax_16
        
        int32_t eax_17 = *esi_2
        
        if (*(esi_2 + 4) != eax_17)
            *(esi_2 - 0xa4) += 1
            *(esi_2 + 4) = eax_17
        
        if (eax_17 != 0xffffffff)
            bool cond:4_1 = *(i + &data_703748) == 0
            *(esi_2 - 0x118) = ecx_6
            
            if (cond:4_1)
                *(esi_2 - 0x118) = ecx_6 + 3
            else
                void* eax_18
                
                if (i != 0xf || var_6_1 == 0)
                    eax_18 = nullptr
                else
                    eax_18 = sub_488780()
                
                int32_t eax_19 = sub_4881f0(eax_18, i)
                
                if (eax_19 == 0)
                    if (i != 2 && i != 3 && i != 4)
                    label_4a78f1:
                        *(esi_2 - 0x118) = var_c_1 + 3
                    else if (var_6_1 != 0)
                        *(esi_2 - 0x118) = var_c_1 + 3
                    else if (data_12a298c != 0)
                        *(esi_2 - 0x118) = var_c_1 + 3
                else
                    int32_t var_14
                    int32_t var_10
                    
                    if (eax_19 == 2)
                        if (i != 0xd)
                            *(esi_2 - 0x118) = var_c_1 + 3
                        else
                            int32_t* eax_27
                            
                            if (var_5_1 == 0)
                                eax_27 = var_c_1 + 4
                            else
                                eax_27 = var_c_1 + 5
                            
                            sub_4267c0(eax_27, eax_27, *esi_2, &var_10, &var_14)
                            
                            if (var_10 s<= 0 || var_14 s<= 0)
                                goto label_4a78f1
                            
                            *(esi_2 - 0x118) = eax_27
                    else
                        if (data_1320e5c == 0 && data_1320e68 == i)
                            int32_t eax_22 = var_c_1 + 2
                            
                            if (data_1320e6c != i)
                                eax_22 = var_c_1 + 1
                            
                            *(esi_2 - 0x118) = eax_22
                        
                        if (var_5_1 != 0)
                            if (i != 0xd)
                                if (i == 0xe && data_13132f8 != 0)
                                    sub_4267c0(var_c_1 + 4, var_c_1 + 4, *esi_2, &var_10, &var_14)
                                    
                                    if (var_10 s> 0 && var_14 s> 0)
                                        *(esi_2 - 0x118) = var_c_1 + 4
                            else if (data_1af17b8 != 0)
                                sub_4267c0(var_c_1 + 4, var_c_1 + 4, *esi_2, &var_10, &var_14)
                                
                                if (var_10 s> 0 && var_14 s> 0)
                                    *(esi_2 - 0x118) = var_c_1 + 4
        
        int32_t* eax_30 = *esi_2
        int32_t* var_18_4 = eax_30
        
        if (eax_30 u<= 0x1ff)
            eax_30 = sub_425430(eax_30, 1)
            
            if (*(var_18_4 * 0x74 + 0x13747b0) != 0)
                eax_30 = sub_427c30(var_18_4 * 0x74 + 0x13747b0, esi_2 - 0x118)
        
        sub_41cd30(eax_30, esi_2 - 0x8c, esi_2 - 0x118, nullptr, nullptr)
        edx_1 = eax_2
    
    i += 1
    esi_2 += 0x120
while (i s< 0x10)
