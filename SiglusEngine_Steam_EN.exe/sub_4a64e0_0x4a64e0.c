// 函数: sub_4a64e0
// 地址: 0x4a64e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_10 = arg1

if (data_1372c20 == arg1)
    return 

int32_t** i_1
i_1.b = data_1372c24.b
char var_19_1 = i_1.b
sub_4a6290()
data_1372c20 = arg1

if (arg1 u> 7)
    i_1 = data_703008
    
    if (var_19_1 == 1)
        i_1 = 1
    
    data_703008 = i_1
    return 

if (*(arg1 * 0xfcc + 0x129aa8c) != 0 && data_1372c28 == 0xffffffff)
    int32_t eax
    uint32_t ecx_1
    eax, ecx_1 = sub_4a6aa0(arg1, nullptr)
    
    if (eax != 1)
        char* var_2c_2 = arg1 * 0xfcc + 0x129aa8c
        int32_t var_30_2 = arg1
        
        if (data_702fc0 != 0)
            char* eax_2 = sub_4c84d0(&data_7027c0, 0x618b48)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_2, data_72d6ac, data_719b6c, 0x61bd3c, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x61bd3c, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x61bd3c, &data_7027c0)
                sub_4a1e40(3)
        else
            sub_4c84d0(&data_7027c0, 0x61bce8)
            sub_446a50()
    else
        int32_t var_2c_1 = 0
        data_1372c28 =
            sub_4254a0(eax, arg1 * 0xfcc + 0x129aa8c, ecx_1, 0xffffffff, 0, eax, eax, eax)

if (*(arg1 * 0xfcc + 0x129aab0) != 0 && data_1372c2c == 0xffffffff)
    int32_t eax_5
    uint32_t ecx_6
    eax_5, ecx_6 = sub_4a6bb0(arg1, nullptr)
    
    if (eax_5 != 1)
        void* var_2c_4 = arg1 * 0xfcc + 0x129aab0
        int32_t var_30_4 = arg1
        
        if (data_702fc0 != 0)
            char* eax_7 = sub_4c84d0(&data_7027c0, 0x618b64)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_7, data_72d6ac, data_719b6c, 0x618b10, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x618b10, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x618b10, &data_7027c0)
                sub_4a1e40(3)
        else
            sub_4c84d0(&data_7027c0, 0x61bd78)
            sub_446a50()
    else
        int32_t var_2c_3 = 0
        data_1372c2c =
            sub_4254a0(eax_5, arg1 * 0xfcc + 0x129aab0, ecx_6, 0xffffffff, 0, eax_5, eax_5, eax_5)

int32_t i = 0
void* eax_11 = arg1 * 0xfcc + 0x129aff0
void* var_18_1 = eax_11

do
    if (*eax_11 != 0 && *((i << 2) + &data_1372c30) == 0xffffffff)
        int32_t eax_12
        uint32_t ecx_11
        eax_12, ecx_11 = sub_4a6c90(eax_11, i, arg1, nullptr)
        
        if (eax_12 != 1)
            void* var_2c_6 = var_18_1
            int32_t var_30_6 = (&data_611580)[i]
            int32_t var_34_4 = arg1
            
            if (data_702fc0 != 0)
                char* eax_14 = sub_4c84d0(&data_7027c0, 0x618b7c)
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_14, data_72d6ac, data_719b6c, 0x618b10, &data_7027c0), 
                            data_72d6ac, data_719b6c, 0x618b10, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x618b10, &data_7027c0)
                    sub_4a1e40(3)
            else
                sub_4c84d0(&data_7027c0, 0x61bdc8)
                sub_446a50()
        else
            int32_t var_2c_5 = 0
            *((i << 2) + &data_1372c30) =
                sub_4254a0(eax_12, var_18_1, ecx_11, 0xffffffff, 0, eax_12, eax_12, eax_12)
        
        eax_11 = var_18_1
    
    i += 1
    eax_11 += 0x24
    var_18_1 = eax_11
while (i s< 0xa)

int32_t ecx_15 = 0
int32_t var_14 = 0
void* esi_2 = arg1 * 0xfcc + 0x129b158
int32_t** i_2 = &data_1372c58

do
    i_1 = i_2
    int32_t j = 0
    i_2 = i_1
    
    do
        if (*esi_2 != 0 && *i_1 == 0xffffffff)
            int32_t eax_17
            uint32_t ecx_17
            eax_17, ecx_17 = sub_4a6d80(i_1, ecx_15, var_10, j, nullptr)
            
            if (eax_17 != 1)
                void* var_2c_8 = esi_2
                int32_t j_1 = j
                int32_t var_34_6 = var_14
                int32_t var_38_5 = var_10
                
                if (data_702fc0 != 0)
                    char* eax_19 = sub_4c84d0(&data_7027c0, 0x618b94)
                    
                    if (data_702fc0 != 0)
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_19, data_72d6ac, data_719b6c, 0x618b10, 
                                    &data_7027c0), 
                                data_72d6ac, data_719b6c, 0x618b10, &data_7027c0), 
                            data_72d6ac, data_719b6c, 0x618b10, &data_7027c0)
                        sub_4a1e40(3)
                else
                    sub_4c84d0(&data_7027c0, 0x61be18)
                    
                    if (data_702fc0 != 0 || data_641ad0 s< 6)
                        MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                        data_641ad0 += 1
            else
                int32_t var_2c_7 = 0
                *i_2 = sub_4254a0(eax_17, esi_2, ecx_17, 0xffffffff, 0, eax_17, eax_17, eax_17)
            
            i_1 = i_2
            ecx_15 = var_14
        
        j += 1
        i_1 = &i_1[1]
        esi_2 += 0x24
        i_2 = i_1
    while (j s< 8)
    
    ecx_15 += 1
    var_14 = ecx_15
while (i_1 s< 0x1372d58)

int32_t* esi_3 = data_1372c28

if (esi_3 != 0xffffffff)
    data_1372dcc += 1
    int32_t edi_4 = 0xffffffff
    int32_t edx_19 = 0xffffffff
    data_1372c24.b = 1
    var_14 = 0xffffffff
    var_10 = 0xffffffff
    
    if (esi_3 u<= 0x1ff)
        sub_425430(esi_3, 1)
        
        if (*(esi_3 * 0x74 + 0x13747b0) != 0)
            sub_426840(&var_14, 0, esi_3 * 0x74 + 0x13747b0, &var_14, &var_10)
            edi_4 = var_14
        
        edx_19 = var_10
    
    int32_t eax_23 = *(arg1 * 0xfcc + 0x129aad8)
    int32_t ecx_26 = *(arg1 * 0xfcc + 0x129aadc)
    int32_t esi_5 = *(arg1 * 0xfcc + 0x129aad4)
    data_1374070 = eax_23
    data_1374074 = ecx_26
    
    switch (esi_5)
        case 1
            ecx_26 = data_7030dc - edx_19
            data_1374074 = ecx_26
        case 2
            eax_23 = 0
            data_1374070 = 0
        case 3
            eax_23 = data_70300c - edi_4
            data_1374070 = eax_23
        default
            ecx_26 = 0
            data_1374074 = ecx_26
    
    data_1374078 = eax_23
    data_137407c = ecx_26
    data_1374080 = eax_23 - 1 + edi_4
    data_1374084 = edx_19 - 1 + ecx_26
    return 

if (var_19_1 == 1)
    data_703008 = 1
