// 函数: sub_530730
// 地址: 0x530730
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_87c
int32_t eax_1 = __security_cookie ^ &var_87c
void var_7c8
void* eax_2 = &var_7c8
int32_t i_4 = 0x21
int32_t i

do
    *(eax_2 - 4) = 0
    eax_2 += 0x3c
    *(eax_2 - 0x3c) = 0
    *(eax_2 - 0x2c) = 0
    *(eax_2 - 0x28) = 0
    *(eax_2 - 0x18) = 0
    *(eax_2 - 0x14) = 0
    i = i_4
    i_4 -= 1
while (i != 1)
sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$@", &data_1b8a720)
int32_t ebx = data_1b8c884
int32_t edi = 0
int32_t eax_3 = 0x20
int32_t var_858[0x22]
void var_7d0

if (ebx s> 0)
    do
        int32_t edx_1 = 0x20
        
        if (edi s< 0x20)
            edx_1 = edi
        
        *(arg2 + 0x20) += 1
        char* ecx_3 = *(arg2 + 0x20)
        uint32_t eax_4 = zx.d(*ecx_3)
        var_858[edx_1] = eax_4
        *(arg2 + 0x20) = &ecx_3[1]
        uint32_t eax_10
        
        if (eax_4 == 0)
            eax_10 = &var_7d0 + edx_1 * 0x3c
            sub_4ef190(eax_10, arg2 + 0x20, &ecx_3[1], "%%$", eax_10)
            ebx = data_1b8c884
        else if (eax_4 == 1)
            eax_10 = &var_7d0 + edx_1 * 0x3c
            sub_4ef190(eax_10, arg2 + 0x20, &ecx_3[1], "&&$", eax_10)
            ebx = data_1b8c884
        char* eax_14 = *(arg2 + 0x20)
        
        while (true)
            char* ecx_4
            ecx_4.b = *eax_14
            
            if (ecx_4.b != 0x2c && ecx_4.b != 0x20)
                break
            
            eax_14 = &eax_14[1]
        
        edi += 1
        *(arg2 + 0x20) = eax_14
        eax_3 = 0x20
    while (edi s< ebx)

*(arg2 + 0x20) += 1
BOOL var_870 = 0

if (ebx s< 0x20)
    eax_3 = ebx

HGLOBAL hMem_1 = nullptr
sub_4d6960(eax_3, &var_870, &hMem_1, 0x273990, "GetSaveFlag")
int32_t result

if (sub_495c20(data_1b8a720, var_870) == 0)
    int32_t var_88c_6 = data_1b8a720
    char* eax_36 = sub_4c84d0(&data_7027c0, 0x61f630)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_36, data_72d6ac, data_719b6c, 0x61f618, &data_7027c0), 
                data_72d6ac, data_719b6c, 0x61f618, &data_7027c0), 
            data_72d6ac, data_719b6c, 0x61f618, &data_7027c0)
        sub_4a1e40(3)
    
    result = 0
else
    int32_t var_874_1 = 0
    
    if (eax_3 s> 0)
        void var_7b0
        void* ebx_1 = &var_7b0
        void* var_878_1 = &var_7b0
        int32_t eax_35
        
        do
            int32_t ecx_11 = *(ebx_1 - 0x14)
            int32_t esi_1 = *(ebx_1 - 0x10)
            int32_t eax_16 = *ebx_1
            int32_t edi_1 = *(ebx_1 + 4)
            int32_t i_5 = *(ebx_1 + 8)
            int32_t var_860_1 = ecx_11
            
            if (i_5 s> 0)
                if (ecx_11 s>= 0x82)
                label_530a1d:
                    int32_t var_88c_5 = var_874_1 + 1
                    char* eax_31 = sub_4c84d0(&data_7027c0, 0x61f5dc)
                    
                    if (data_702fc0 != 0)
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_31, data_72d6ac, data_719b6c, 0x61f618, 
                                    &data_7027c0), 
                                data_72d6ac, data_719b6c, 0x61f618, &data_7027c0), 
                            data_72d6ac, data_719b6c, 0x61f618, &data_7027c0)
                        sub_4a1e40(3)
                else
                    int32_t edx_5 = (&data_63ecb0)[ecx_11]
                    
                    if (edx_5 s<= 0 || *((ecx_11 << 2) + &data_610fb0) != 0 || esi_1 s< 0
                            || esi_1 s>= edx_5 || esi_1 - 1 + i_5 s< 0
                            || esi_1 - 1 + i_5 s>= (&data_63ecb0)[ecx_11] || eax_16 s>= 0x82)
                        goto label_530a1d
                    
                    int32_t eax_17 = (&data_63ecb0)[eax_16]
                    
                    if (eax_17 s<= 0 || edi_1 s< 0 || edi_1 s>= eax_17 || edi_1 - 1 + i_5 s< 0
                            || edi_1 - 1 + i_5 s>= eax_17)
                        goto label_530a1d
                    
                    int32_t eax_19 = var_858[var_874_1]
                    
                    if (eax_19 == 0)
                        if (i_5 s> 0)
                            void* eax_26 = var_870 + 0x16d8
                            int32_t edi_2 = edi_1 - esi_1
                            void* var_868_2 = eax_26
                            int32_t i_1
                            
                            do
                                int32_t var_85c
                                sub_4e76e0(&var_85c, esi_1, ecx_11, &var_85c, eax_26)
                                sub_4e8000(var_878_1, edi_2 + esi_1, *var_878_1, var_85c, 
                                    &data_704898)
                                ecx_11 = var_860_1
                                eax_26 = var_868_2
                                esi_1 += 1
                                i_1 = i_5
                                i_5 -= 1
                            while (i_1 != 1)
                    else if (eax_19 == 1)
                        char* esi_2 =
                            sub_4a4a30(eax_19 - 1, *(var_878_1 - 0x14), var_870 + 0x1317c, esi_1)
                        
                        if (esi_2 != 0 && i_5 s> 0)
                            int32_t i_2
                            
                            do
                                sub_4a4620(var_878_1, esi_2, edi_1, *var_878_1)
                                
                                if (*esi_2 != 0)
                                    esi_2 = &esi_2[sub_4cfc80(esi_2)]
                                else
                                    esi_2 = &esi_2[1]
                                
                                edi_1 += 1
                                i_2 = i_5
                                i_5 -= 1
                            while (i_2 != 1)
            
            eax_35 = var_874_1 + 1
            ebx_1 = var_878_1 + 0x3c
            var_874_1 = eax_35
            var_878_1 = ebx_1
        while (eax_35 s< eax_3)
    
    result = 1

HGLOBAL hMem = hMem_1

if (hMem != 0)
    int32_t edi_3 = data_1af413c
    char eax_39
    
    if (edi_3 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_39 = sub_4d6b80(&hMem_1)
    
    if (edi_3 == 0 || eax_39 != 0)
        GlobalUnlock(hMem)
        GlobalFree(hMem)
        
        if (edi_3 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)

void* esi_3 = &var_7d0
int32_t i_6 = 0x21
int32_t i_3

do
    sub_4eef40(esi_3, 3)
    esi_3 += 0x3c
    i_3 = i_6
    i_6 -= 1
while (i_3 != 1)
sub_5f02dd(eax_1 ^ &var_87c)
return result
