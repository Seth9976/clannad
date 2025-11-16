// 函数: sub_581410
// 地址: 0x581410
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t i_15 = zx.d(arg3[1])
uint32_t j_5 = 0
uint32_t j_2 = zx.d(*arg3)
uint32_t ecx = i_15 * j_2
void* var_14 = &arg3[2]
uint32_t j_4 = 0
int32_t var_58 = 0xffffffff
int32_t var_5c = 0xffffffff
int32_t edi = ecx << 2
int32_t var_60 = 0xffffffff
void* edx = &arg3[2 + ecx * 2]
int32_t var_64 = 0xffffffff
int32_t eax_2 = *edx
uint32_t j_3 = j_2
HGLOBAL hMem_5 = nullptr
BOOL var_20 = 0
void* eax_3 = edx + 4 + (eax_2 << 2)
uint32_t edx_2 = zx.d(*(eax_3 + 1))
uint32_t eax_4 = zx.d(*(eax_3 + 3))
BOOL eax_5 = sub_4d6960(eax_4, &var_20, &hMem_5, ecx, "CHARA_CONVERT(TYPE)")
BOOL var_18 = var_20
HGLOBAL hMem_4 = nullptr
BOOL var_2c = 0
sub_4d6960(eax_5, &var_2c, &hMem_4, edi, "CHARA_CONVERT(X)")
BOOL eax_6 = var_2c
BOOL var_24 = eax_6
HGLOBAL hMem_3 = nullptr
BOOL var_28 = 0
sub_4d6960(eax_6, &var_28, &hMem_3, edi, "CHARA_CONVERT(Y)")
uint32_t i_12 = i_15
BOOL var_30 = var_28

if (i_12 s> 0)
    uint32_t i_4 = i_12
    uint32_t i_10 = i_12
    uint32_t i
    
    do
        j_5 = 0
        j_4 = 0
        
        if (j_2 s> 0)
            void* edx_6 = var_14
            BOOL edi_1 = var_18
            BOOL esi = var_30
            uint32_t j_1 = j_2
            j_4 = j_2
            BOOL ebx = var_24
            uint32_t j
            
            do
                int32_t eax_8 = *edx_6
                edx_6 += 4
                void* ecx_7 = *(edx + 4 + (eax_8 << 2)) + eax_3
                eax_8.b = *ecx_7
                *edi_1 = eax_8.b
                edi_1 += 1
                *ebx = zx.d(*(ecx_7 + 1))
                ebx += 4
                *esi = zx.d(*(ecx_7 + 3))
                esi += 4
                j = j_1
                j_1 -= 1
            while (j != 1)
            i_4 = i_10
            var_30 = esi
            j_5 = j_4
            var_24 = ebx
            j_2 = j_3
            var_18 = edi_1
            var_14 = edx_6
        
        i = i_4
        i_4 -= 1
        i_10 = i_4
    while (i != 1)
    i_12 = i_15

int32_t var_34_1 = 0
sub_4d6960(0, arg8, arg7, 0x74, "32BitChipData")
void* result = 0x74
int32_t i_1 = 0
int32_t i_2 = 0
uint32_t i_17 = i_12

while (true)
    BOOL ecx_9 = var_20
    int32_t i_5 = 0
    int32_t i_9 = 0
    
    if (i_17 s> 0)
        do
            j_5 = 0
            j_4 = 0
            
            if (j_2 s> 0)
                while (zx.d(*ecx_9) != i_1)
                    j_5 += 1
                    ecx_9 += 1
                    
                    if (j_5 s>= j_2)
                        break
                
                i_5 = i_9
                j_4 = j_5
            
            if (j_5 != j_2)
                break
            
            i_5 += 1
            i_9 = i_5
        while (i_5 s< i_17)
    
    if (i_5 == i_17 && j_5 == j_2)
        i_1 += 1
        i_2 = i_1
        
        if (i_1 s>= 2)
            break
        
        continue
    
    int32_t i_13 = 0
    int32_t i_8 = i_5
    void* ecx_16 = nullptr
    int32_t i_14 = 0
    void* var_8_1 = nullptr
    
    if (i_5 s< i_15)
        BOOL edi_2 = var_28
        int32_t eax_29 = i_5 * j_2
        void* ecx_19 = var_20 + eax_29 + j_5
        int32_t edx_10 = var_2c - edi_2
        void* var_4c_1 = ecx_19
        int32_t var_68_1 = edx_10
        i_5 = edi_2 + ((eax_29 + j_5) << 2)
        int32_t i_7 = i_5
        
        while (true)
            int32_t edi_3 = edx_10 + i_5
            i_5 = 0
            uint32_t j_6 = j_5
            
            if (j_5 s< j_2)
                int32_t i_11 = 0
                
                while (zx.d(*ecx_19) == i_2)
                    i_11 += *edi_3
                    j_6 += 1
                    *ecx_19 = 2
                    edi_3 += 4
                    ecx_19 += 1
                    
                    if (j_6 s>= j_2)
                        break
                
                j_5 = j_4
                i_5 = i_11
            
            i_13 = i_14
            
            if (i_13 != 0 && i_13 != i_5)
                if (j_6 s> j_5)
                    i_5 = i_2
                    uint32_t i_6 = j_6 - j_5
                    uint32_t i_3
                    
                    do
                        *(ecx_19 - 1) = i_5.b
                        ecx_19 -= 1
                        i_3 = i_6
                        i_6 -= 1
                    while (i_3 != 1)
                
                break
            
            i_13 = i_5
            int32_t i_16 = i_8 + 1
            i_14 = i_13
            i_8 = i_16
            var_8_1 += *i_7
            i_5 = i_7 + (j_2 << 2)
            ecx_19 = var_4c_1 + j_2
            i_7 = i_5
            var_4c_1 = ecx_19
            
            if (i_16 s>= i_15)
                break
            
            edx_10 = var_68_1
        
        ecx_16 = var_8_1
    
    void* result_1 = result + ((ecx_16 * i_13) << 2) + 0x5c
    sub_4d6ae0(i_5, arg8, arg7, result_1)
    void* ecx_27 = *arg8 + result
    sub_4d1ba0(arg8, ((ecx_16 * i_13) << 2) + 0x5c, ecx_27, 0)
    result = result_1
    int32_t edi_6 = edx_2 * j_5
    *ecx_27 = j_5.w * edx_2.w
    int32_t ecx_29 = i_9 * eax_4
    *(ecx_27 + 6) = i_14.w
    *(ecx_27 + 2) = eax_4.w * i_9.w
    *(ecx_27 + 4) = i_2.b
    *(ecx_27 + 8) = var_8_1.w
    sub_581300(
        sub_4d22e0(&var_60, &var_5c, &var_58, &var_60, &var_64, edi_6, ecx_29, i_14 - 1 + edi_6, 
            var_8_1 - 1 + ecx_29), 
        i_14, ecx_27 + 0x5c, var_8_1, arg3, edi_6, ecx_29)
    j_2 = j_3
    var_34_1 += 1
    i_1 = i_2
    i_17 = i_15

int32_t ecx_10 = var_58
int32_t edx_8 = var_5c
char* esi_1 = *arg8
*(esi_1 + 2) = var_34_1.w
int32_t eax_15 = var_60 - ecx_10
*esi_1 = 1
*(esi_1 + 4) = ecx_10
*(esi_1 + 0xc) = eax_15 + 1
int32_t eax_18 = var_64 - edx_8
*(esi_1 + 8) = edx_8
*(esi_1 + 0x10) = eax_18 + 1
*(esi_1 + 0x14) = arg5
*(esi_1 + 0x18) = arg6
*(esi_1 + 0x1c) = arg2
*(esi_1 + 0x20) = arg4
HGLOBAL hMem = hMem_5

if (hMem != 0)
    void** ecx_11 = data_1af413c
    char eax_24
    
    if (ecx_11 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_24 = sub_4d6b80(&hMem_5)
    
    if (ecx_11 == 0 || eax_24 != 0)
        GlobalUnlock(hMem)
        GlobalFree(hMem)
        
        if (ecx_11 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)

HGLOBAL hMem_1 = hMem_4

if (hMem_1 != 0)
    void** ecx_13 = data_1af413c
    char eax_25
    
    if (ecx_13 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_25 = sub_4d6b80(&hMem_4)
    
    if (ecx_13 == 0 || eax_25 != 0)
        GlobalUnlock(hMem_1)
        GlobalFree(hMem_1)
        
        if (ecx_13 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)

HGLOBAL hMem_2 = hMem_3

if (hMem_2 != 0)
    void** eax_26 = data_1af413c
    char eax_27
    
    if (eax_26 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_27 = sub_4d6b80(&hMem_3)
    
    if (eax_26 == 0 || eax_27 != 0)
        GlobalUnlock(hMem_2)
        GlobalFree(hMem_2)
        
        if (eax_26 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)

return result
