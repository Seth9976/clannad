// 函数: sub_448e30
// 地址: 0x448e30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_780
int32_t* result = __security_cookie ^ &var_780
int32_t* result_2 = result
int32_t edx = data_12c109c
int32_t ecx = 0
data_1af44e4 = 0
int32_t var_770 = 0
uint32_t uMode_2
uint32_t uMode_3 = uMode_2

if (edx s> 0)
    do
        int32_t* result_3 = ecx * 0x5c
        char var_628
        char* ecx_1 = &var_628
        int32_t* result_1 = result_3
        char* edx_1 = &result_3[0x4af8aa]
        
        if (edx_1 != 0)
            result_3.b = *edx_1
            
            while (result_3.b != 0)
                if (result_3.b u< 0x80)
                label_448eb0:
                    *ecx_1 = result_3.b
                    ecx_1 = &ecx_1[1]
                    edx_1 = &edx_1[1]
                else
                    if (result_3.b u< 0xa0)
                        if (result_3.b u>= 0xfe)
                            goto label_448eb0
                    else if (result_3.b u<= 0xdf || result_3.b u>= 0xfe)
                        goto label_448eb0
                    
                    *ecx_1 = result_3.b
                    result_3.b = edx_1[1]
                    ecx_1[1] = result_3.b
                    ecx_1 = &ecx_1[2]
                    edx_1 = &edx_1[2]
                
                result_3.b = *edx_1
            
            *ecx_1 = 0
        
        char* edi_1 = &var_628
        int32_t esi_1 = 0xffffffff
        char* eax_1 = &var_628
        void var_627
        
        if (var_628 != 0)
            int32_t edx_2 = 0
            
            do
                ecx_1.b = *eax_1
                
                if (ecx_1.b u< 0x80)
                label_448ef6:
                    
                    if (ecx_1.b == 0x5c)
                        esi_1 = edx_2
                    
                    eax_1 = &eax_1[1]
                    edx_2 += 1
                else if (ecx_1.b u< 0xa0)
                    if (ecx_1.b u>= 0xfe)
                        goto label_448ef6
                    
                    eax_1 = &eax_1[2]
                    edx_2 += 2
                else
                    if (ecx_1.b u<= 0xdf || ecx_1.b u>= 0xfe)
                        goto label_448ef6
                    
                    eax_1 = &eax_1[2]
                    edx_2 += 2
            while (*eax_1 != 0)
            
            if (esi_1 != 0xffffffff)
                edi_1 = &var_627 + esi_1
        
        eax_1.b = *edi_1
        int32_t esi_2 = 0xffffffff
        char var_77d_1 = eax_1.b
        char* ecx_2 = edi_1
        void* edi_2
        
        if (eax_1.b == 0)
        label_448f4f:
            int32_t edx_4 = 0
            char* eax_2 = edi_1
            
            if (var_77d_1 != 0)
                do
                    ecx_2.b = *eax_2
                    
                    if (ecx_2.b u< 0x80)
                        edx_4 += 1
                        eax_2 = &eax_2[1]
                    else if (ecx_2.b u< 0xa0)
                        if (ecx_2.b u>= 0xfe)
                            edx_4 += 1
                            eax_2 = &eax_2[1]
                        else
                            edx_4 += 2
                            eax_2 = &eax_2[2]
                    else if (ecx_2.b u<= 0xdf || ecx_2.b u>= 0xfe)
                        edx_4 += 1
                        eax_2 = &eax_2[1]
                    else
                        edx_4 += 2
                        eax_2 = &eax_2[2]
                while (*eax_2 != 0)
            
            edi_2 = &edi_1[edx_4]
        else
            int32_t edx_3 = 0
            
            do
                eax_1.b = *ecx_2
                
                if (eax_1.b u< 0x80)
                label_448f3c:
                    
                    if (eax_1.b == 0x2e)
                        esi_2 = edx_3
                    
                    ecx_2 = &ecx_2[1]
                    edx_3 += 1
                else if (eax_1.b u< 0xa0)
                    if (eax_1.b u>= 0xfe)
                        goto label_448f3c
                    
                    ecx_2 = &ecx_2[2]
                    edx_3 += 2
                else
                    if (eax_1.b u<= 0xdf || eax_1.b u>= 0xfe)
                        goto label_448f3c
                    
                    ecx_2 = &ecx_2[2]
                    edx_3 += 2
            while (*ecx_2 != 0)
            
            if (esi_2 == 0xffffffff)
                goto label_448f4f
            
            edi_2 = &edi_1[esi_2]
        
        void* const var_78c_1 = &data_61737c
        sub_4c84d0(edi_2, ".%s")
        uint32_t uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
        int32_t esi_3 = 0
        char* var_78c_2 = &var_628
        int32_t var_790_1 = 0x1350390
        char* var_794_2 = &data_1352410
        void fileName
        sub_4c84d0(&fileName, "%s\%s\%s")
        WIN32_FIND_DATAA findFileData
        HANDLE hFindFile = FindFirstFileA(&fileName, &findFileData)
        
        if (hFindFile != 0xffffffff)
            FindClose(hFindFile)
            int32_t eax_3
            eax_3.b = (findFileData.dwFileAttributes.b & 0x10) != 0
            int32_t var_774_1 = eax_3 + 1
            esi_3 = eax_3 + 1
        
        SetErrorMode(uMode)
        int32_t var_794_4
        void var_420
        int32_t eax_5
        int16_t* eax_19
        
        if (esi_3 != 1)
            char* esi_4 = &var_628
            int32_t eax_6 = sub_4d1610(&var_628, 0x5c)
            
            if (eax_6 != 0xffffffff)
                esi_4 = &var_627 + eax_6
            
            int32_t eax_7 = sub_4d1610(esi_4, 0x2e)
            
            if (eax_7 == 0xffffffff)
                eax_7 = sub_4cfc80(esi_4)
                esi_4 -= 1
            
            void* const var_78c_8 = &data_617380
            sub_4c84d0(&esi_4[eax_7], ".%s")
            uint32_t uMode_1 = SetErrorMode(SEM_FAILCRITICALERRORS)
            int32_t esi_6 = 0
            char* var_78c_9 = &var_628
            int32_t var_790_6 = 0x1350390
            char* var_794_6 = &data_1352410
            sub_4c84d0(&fileName, "%s\%s\%s")
            HANDLE hFindFile_1 = FindFirstFileA(&fileName, &findFileData)
            
            if (hFindFile_1 != 0xffffffff)
                FindClose(hFindFile_1)
                int32_t eax_8
                eax_8.b = (findFileData.dwFileAttributes.b & 0x10) != 0
                int32_t var_774_2 = eax_8 + 1
                esi_6 = eax_8 + 1
            
            SetErrorMode(uMode_1)
            
            if (esi_6 == 1)
                char* var_78c_13 = &var_628
                int32_t var_790_8 = 0x1350390
                char* var_794_7 = &data_1352410
                sub_4c84d0(&var_420, "%s\%s\%s")
                uMode_2 = 0
                WaitForSingleObject(data_641b54, 0xffffffff)
                
                if (data_641b5c == 0)
                    goto label_449297
                
                int32_t ecx_7
                eax_5, ecx_7 = sub_4c29d0(0)
                int32_t var_78c_14 = ecx_7
                int32_t var_790_10 = 0xffffffff
                var_794_4 = 2
                goto label_449277
            
            char* esi_7 = &var_628
            int32_t eax_10 = sub_4d1610(&var_628, 0x5c)
            
            if (eax_10 != 0xffffffff)
                esi_7 = &var_627 + eax_10
            
            int32_t eax_11 = sub_4d1610(esi_7, 0x2e)
            
            if (eax_11 == 0xffffffff)
                eax_11 = sub_4cfc80(esi_7)
                esi_7 -= 1
            
            void* const var_78c_15 = &data_617384
            sub_4c84d0(&esi_7[eax_11], ".%s")
            uMode_2 = SetErrorMode(SEM_FAILCRITICALERRORS)
            int32_t esi_9 = 0
            char* var_78c_16 = &var_628
            int32_t var_790_11 = 0x1350390
            char* var_794_9 = &data_1352410
            sub_4c84d0(&fileName, "%s\%s\%s")
            HANDLE hFindFile_2 = FindFirstFileA(&fileName, &findFileData)
            
            if (hFindFile_2 != 0xffffffff)
                FindClose(hFindFile_2)
                int32_t eax_13
                eax_13.b = (findFileData.dwFileAttributes.b & 0x10) != 0
                int32_t var_774_3 = eax_13 + 1
                esi_9 = eax_13 + 1
            
            SetErrorMode(uMode_2)
            
            if (esi_9 == 1)
                char* var_78c_20 = &var_628
                int32_t var_790_13 = 0x1350390
                char* var_794_10 = &data_1352410
                sub_4c84d0(&var_420, "%s\%s\%s")
                uMode_2 = 0
                WaitForSingleObject(data_641b54, 0xffffffff)
                
                if (data_641b5c == 0)
                    goto label_449297
                
                int32_t ecx_11
                eax_5, ecx_11 = sub_4c29d0(0)
                int32_t var_78c_21 = ecx_11
                int32_t var_790_15 = 0xffffffff
                var_794_4 = 0
                goto label_449277
            
            char* esi_10 = &var_628
            int32_t eax_20 = sub_4d1610(&var_628, 0x5c)
            
            if (eax_20 != 0xffffffff)
                esi_10 = &var_627 + eax_20
            
            int32_t eax_21 = sub_4d1610(esi_10, 0x2e)
            
            if (eax_21 == 0xffffffff)
                eax_21 = sub_4cfc80(esi_10)
                esi_10 -= 1
            
            void* const var_78c_22 = &data_617388
            result = sub_4c3da0(sub_4c84d0(&esi_10[eax_21], ".%s"), 6, &var_628, 0x1a)
            
            if (result != 1)
                int32_t eax_23 = sub_4c3960(&var_628, &data_61737c)
                int32_t esi_12 = data_7031ac
                void* eax_24
                
                if (esi_12 != 0xffffffff)
                    eax_24 = sub_4c51f0(eax_23, &var_628, esi_12, nullptr)
                
                uint32_t var_77c
                int32_t var_778
                int32_t esi_15
                
                if (esi_12 == 0xffffffff || eax_24 == 0)
                    int32_t eax_29 = sub_4c3960(&var_628, &data_617380)
                    void* eax_30
                    
                    if (esi_12 != 0xffffffff)
                        eax_30 = sub_4c51f0(eax_29, &var_628, esi_12, nullptr)
                    
                    uint32_t var_79c_8
                    int32_t var_794_17
                    uint32_t var_790_21
                    uint32_t eax_32
                    
                    if (esi_12 == 0xffffffff || eax_30 == 0)
                        int32_t eax_33 = sub_4c3960(&var_628, &data_617384)
                        void* eax_34
                        
                        if (esi_12 != 0xffffffff)
                            eax_34 = sub_4c51f0(eax_33, &var_628, esi_12, nullptr)
                        
                        if (esi_12 != 0xffffffff && eax_34 != 0)
                            sub_4c5550(&var_420, &var_628, esi_12, 6, &var_420, &var_77c, &var_778)
                            uMode_2 = 0
                            WaitForSingleObject(data_641b54, 0xffffffff)
                            
                            if (data_641b5c == 0)
                                goto label_449589
                            
                            int32_t ecx_29
                            eax_32, ecx_29 = sub_4c29d0(0)
                            int32_t var_78c_28 = ecx_29
                            var_790_21 = 0xffffffff
                            var_794_17 = 0
                            int32_t var_798_2 = 0
                            var_79c_8 = var_77c
                            goto label_44955e
                        
                        result = result_1
                        data_1af44e4 = 1
                        *(result + &data_12be2f0) = 1
                    else
                        sub_4c5550(&var_420, &var_628, esi_12, 6, &var_420, &var_77c, &var_778)
                        uMode_2 = 0
                        WaitForSingleObject(data_641b54, 0xffffffff)
                        
                        if (data_641b5c != 0)
                            int32_t ecx_25 = sub_4c29d0(0)
                            eax_32 = var_77c
                            int32_t var_78c_26 = ecx_25
                            var_790_21 = eax_32
                            var_794_17 = 2
                            int32_t var_798_1 = 0
                            var_79c_8 = eax_32
                        label_44955e:
                            int32_t var_7a0_2 = var_778
                            data_208cd54 = 0x2092d50
                            int32_t eax_36 = sub_4cd600(eax_32, &var_420, 0x2092d50, var_7a0_2, 
                                var_79c_8, 0, var_794_17, var_790_21)
                            
                            if (eax_36 == 0)
                                uMode_2 = eax_36 - 2
                            
                            goto label_449598
                        
                    label_449589:
                        uMode_2 = 0xfffffffd
                    label_449598:
                        result = ReleaseSemaphore(data_641b54, 1, nullptr)
                        
                        if (uMode_2 s>= 0)
                            int16_t* eax_37 = sub_4c32f0(uMode_2)
                            esi_15 = (zx.d(eax_37[1]) u>> 3) * zx.d(*eax_37)
                            result = sub_4c2b50(uMode_2)
                            goto label_4495bf
                else
                    sub_4c5550(&var_420, &var_628, esi_12, 6, &var_420, &var_77c, &var_778)
                    uMode_2 = 0
                    WaitForSingleObject(data_641b54, 0xffffffff)
                    
                    if (data_641b5c == 0)
                        uMode_2 = 0xfffffffd
                    else
                        int32_t eax_26
                        int32_t ecx_19
                        eax_26, ecx_19 = sub_4c29d0(0)
                        int32_t var_78c_24 = ecx_19
                        uint32_t var_79c_7 = var_77c
                        data_208cd54 = 0x2092d50
                        int32_t eax_27 = sub_4cd600(eax_26, &var_420, 0x2092d50, var_778, 
                            var_79c_7, 0, 1, 0xffffffff)
                        
                        if (eax_27 == 0)
                            uMode_2 = eax_27 - 2
                    
                    result = ReleaseSemaphore(data_641b54, 1, nullptr)
                    
                    if (uMode_2 s>= 0)
                        eax_19 = sub_4c32f0(uMode_2)
                    label_449433:
                        esi_15 = (zx.d(eax_19[1]) u>> 3) * zx.d(*eax_19)
                        WaitForSingleObject(data_641b54, 0xffffffff)
                        sub_4c29d0(uMode_2)
                        result = ReleaseSemaphore(data_641b54, 1, nullptr)
                    label_4495bf:
                        
                        if (esi_15 != 0)
                            int32_t eax_39 = result_1[0x4af8a7]
                            
                            if (eax_39 s< 0x55d4a80)
                                result_1[0x4af8a7] = eax_39 * esi_15
                            
                            int32_t eax_41 = result_1[0x4af8a8]
                            
                            if (eax_41 s< 0x55d4a80)
                                result_1[0x4af8a8] = eax_41 * esi_15
                            
                            result = result_1[0x4af8a9]
                            
                            if (result s< 0x55d4a80)
                                result *= esi_15
                                result_1[0x4af8a9] = result
        else
            char* var_78c_6 = &var_628
            int32_t var_790_3 = 0x1350390
            char* var_794_3 = &data_1352410
            sub_4c84d0(&var_420, "%s\%s\%s")
            uMode_2 = 0
            WaitForSingleObject(data_641b54, 0xffffffff)
            
            if (data_641b5c != 0)
                int32_t ecx_3
                eax_5, ecx_3 = sub_4c29d0(0)
                int32_t var_78c_7 = ecx_3
                int32_t var_790_5 = 0xffffffff
                var_794_4 = esi_3
            label_449277:
                data_208cd54 = 0x2092d50
                int32_t eax_15 =
                    sub_4cd600(eax_5, &var_420, 0x2092d50, 0, 0xffffffff, 0, var_794_4, 0xffffffff)
                
                if (eax_15 == 0)
                    uMode_2 = eax_15 - 2
                
                goto label_4492a6
            
        label_449297:
            uMode_2 = 0xfffffffd
        label_4492a6:
            result = ReleaseSemaphore(data_641b54, 1, nullptr)
            
            if (uMode_2 s>= 0)
                void* eax_18
                
                if (data_641b5c != 0 && uMode_2 s< 0x40)
                    eax_18 = (&data_208cd54)[uMode_2 * 0x60]
                
                if (data_641b5c == 0 || uMode_2 s>= 0x40 || eax_18 == 0)
                    eax_19 = nullptr
                else
                    eax_19 = eax_18 + 0x2c
                
                goto label_449433
        edx = data_12c109c
        ecx = var_770 + 1
        var_770 = ecx
    while (ecx s< edx)

int32_t ecx_33 = 0
data_1af44e0 = 0

if (edx s> 0)
    result = &data_12be2f4
    
    while (result[-1] == 0 || *result == 0)
        ecx_33 += 1
        result = &result[0x17]
        
        if (ecx_33 s>= edx)
            sub_5f02dd(result_2 ^ &var_780)
            return result
    
    data_1af44e0 = 1

sub_5f02dd(result_2 ^ &var_780)
return result
