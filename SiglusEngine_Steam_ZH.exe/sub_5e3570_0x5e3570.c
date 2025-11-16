// 函数: sub_5e3570
// 地址: 0x5e3570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t* var_8 = ebx

if (*ebx s< 0)
    return 

int32_t i_3 = (ebx[0xc1] - ebx[0xc0]) s/ 0x15fc
int32_t i_6 = i_3

if (i_3 s> 0)
    int32_t eax_2 = 0
    int32_t var_c_1 = 0
    int32_t i
    
    do
        void* ebx_2 = ebx[0xc0] + eax_2
        sub_5f0720(ebx_2)
        int32_t j_3 = (*(ebx_2 + 0x1438) - *(ebx_2 + 0x1434)) s/ 0x15fc
        
        if (j_3 s> 0)
            int32_t esi_5 = 0
            int32_t j
            
            do
                sub_5f06d0(*(ebx_2 + 0x1434) + esi_5)
                esi_5 += 0x15fc
                j = j_3
                j_3 -= 1
            while (j != 1)
            i_3 = i_6
        
        ebx = var_8
        eax_2 = var_c_1 + 0x15fc
        i = i_3
        i_3 -= 1
        var_c_1 = eax_2
        i_6 = i_3
    while (i != 1)

int32_t i_4 = (ebx[0x130] - ebx[0x12f]) s/ 0x15fc
int32_t i_7 = i_4

if (i_4 s> 0)
    int32_t eax_6 = 0
    int32_t var_10_1 = 0
    int32_t i_1
    
    do
        void* ebx_4 = ebx[0x12f] + eax_6
        sub_5f0720(ebx_4)
        int32_t j_4 = (*(ebx_4 + 0x1438) - *(ebx_4 + 0x1434)) s/ 0x15fc
        
        if (j_4 s> 0)
            int32_t esi_8 = 0
            int32_t j_1
            
            do
                sub_5f06d0(*(ebx_4 + 0x1434) + esi_8)
                esi_8 += 0x15fc
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
            i_4 = i_7
        
        ebx = var_8
        eax_6 = var_10_1 + 0x15fc
        i_1 = i_4
        i_4 -= 1
        var_10_1 = eax_6
        i_7 = i_4
    while (i_1 != 1)

int32_t i_5 = (ebx[0x19f] - ebx[0x19e]) s/ 0x15fc
int32_t i_8 = i_5

if (i_5 s<= 0)
    return 

int32_t eax = 0
int32_t var_10_2 = 0
int32_t i_2

do
    void* ebx_6 = ebx[0x19e] + eax
    sub_5f0720(ebx_6)
    int32_t j_5 = (*(ebx_6 + 0x1438) - *(ebx_6 + 0x1434)) s/ 0x15fc
    
    if (j_5 s> 0)
        int32_t esi_11 = 0
        int32_t j_2
        
        do
            sub_5f06d0(*(ebx_6 + 0x1434) + esi_11)
            esi_11 += 0x15fc
            j_2 = j_5
            j_5 -= 1
        while (j_2 != 1)
        i_5 = i_8
    
    ebx = var_8
    eax = var_10_2 + 0x15fc
    i_2 = i_5
    i_5 -= 1
    var_10_2 = eax
    i_8 = i_5
while (i_2 != 1)
