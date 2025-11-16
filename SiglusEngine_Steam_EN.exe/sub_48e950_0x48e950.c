// 函数: sub_48e950
// 地址: 0x48e950
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL var_354
int32_t eax_1 = __security_cookie ^ &var_354
void* ebx = arg4
int32_t* eax_2 = &data_1b8be90
int32_t i = 0
void* var_33c = ebx
void* fileTime

do
    if (*eax_2 != 0 && ebx == eax_2[2])
        if (arg5 == 0)
            void* fileTime_1 = i * 0x1c
            void* ecx_1 = *(fileTime_1 + &data_1b8be94)
            int32_t* esi_1 = fileTime_1 + &data_1b8be90
            fileTime = fileTime_1
            *(arg2 + 0xc) = ecx_1
            int32_t eax_7
            int32_t edx_1
            edx_1:eax_7 = muls.dp.d(0x68db8bad, *(ecx_1 + 4))
            int32_t edx_2 = edx_1 s>> 0xc
            int32_t eax_12
            eax_12.b = mods.dp.d(sx.q((edx_2 u>> 0x1f) + edx_2), 0xa) != 2
            *(arg2 + 0x10) = eax_12 + 1
            *(arg2 + 0x14) = *(*(arg2 + 0xc) + 8) + esi_1[1]
            *(arg2 + 0x18) = *(*(arg2 + 0xc) + 0x20) + esi_1[1]
            *(arg2 + 4) = *esi_1
            *(arg2 + 8) = esi_1[1]
            int32_t eax_22 = esi_1[2]
            *(arg3 + 0x34) = eax_22
            
            if (data_702fc0 != 0)
                sub_4d1c30(eax_22, &esi_1[3], &data_187c614, 0x10)
            
            if (i != 0x1f && i s< 0x1f)
                void* ebx_3 = fileTime + 0x1b8beac - esi_1
                int32_t j_1 = 0x1f - i
                int32_t j
                
                do
                    sub_4d1c30(j_1, ebx_3 + esi_1, esi_1, 0x1c)
                    esi_1 = &esi_1[7]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            esi_1[1] = 0
            *esi_1 = 0
        
        sub_5f02dd(eax_1 ^ &var_354)
        return 1
    
    i += 1
    eax_2 = &eax_2[7]
while (i s< 0x20)

int32_t result = 0
var_354 = 0
int32_t var_348 = 0
void* const var_368_4
char var_218

switch (sub_48e820(ebx, &var_218) + 1)
    case 0
        void* var_364_10 = ebx
        var_368_4 = &data_61aa6c
        goto label_48eed1
    case 1
        void* var_364_9 = ebx
        var_368_4 = &data_61aa38
    label_48eed1:
        char* eax_79 = sub_4c84d0(&data_7027c0, var_368_4)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_79, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
            sub_4a1e40(3)
    case 2
        sub_4c4810(&var_354, &var_348, &var_218, &var_354, "SEEN_DATA", 0xffffffff, 0xffffffff)
        goto label_48eae2
    case 3
        int32_t eax_25 = data_1b8be84
        sub_4c4a00(&var_354, &var_348, &var_218, &var_354, "SEEN_DATA", 
            *(eax_25 + (ebx << 3)) + data_1af44c8, *(eax_25 + (ebx << 3) + 4), 0xffffffff, 
            0xffffffff)
    label_48eae2:
        BOOL edi = var_354
        
        if (edi != 0)
            char* var_330
            FILETIME var_328
            void* var_320
            
            if (data_702fc0 != 0 && var_218 != 0)
                sub_4c3ba0(&var_330, 0xffffffff, &var_218, 0xffffffff, &var_330, &var_320, 
                    &fileTime)
                FileTimeToLocalFileTime(&fileTime, &var_328)
                FileTimeToSystemTime(&var_328, &data_187c614)
            
            if (mods.dp.d(sx.q(*(edi + 4)), 0x64) == 2)
                if (arg5 == 0)
                    int32_t ecx_14 = 0
                    int32_t esi_2 = *(edi + 0x28)
                    void* fileTime_2 = *(edi + 0x20) + edi
                    fileTime = fileTime_2
                    void* fileTime_3 = fileTime_2
                    
                    if (esi_2 s> 0)
                        do
                            uint32_t eax_42 = zx.d(ecx_14.b)
                            fileTime_3 += 1
                            ecx_14 += 1
                            eax_42.b = *(eax_42 + 0x610a70)
                            *(fileTime_3 - 1) ^= eax_42.b
                        while (ecx_14 s< esi_2)
                        
                        fileTime_2 = fileTime
                    
                    var_330 = nullptr
                    var_320 = nullptr
                    BOOL eax_43 = sub_4bb540(fileTime_2, &var_320, fileTime_2, &var_330)
                    sub_4d6560(eax_43, eax_43, var_320, "SEEN_DATA_ORGINAL")
                    uint32_t eax_45 = *(edi + 0x20) + eax_43
                    int32_t esi_3 = *(edi + 4)
                    BOOL var_350 = 0
                    fileTime = nullptr
                    sub_4d1c30(sub_4d6960(eax_45, &var_350, &fileTime, eax_45, "SEEN_DATA"), edi, 
                        var_350, *(edi + 0x20))
                    int32_t eax_51
                    int32_t edx_24
                    edx_24:eax_51 = sx.q(esi_3 s/ 0x186a0)
                    int32_t temp1_4 = mods.dp.d(edx_24:eax_51, 0xa)
                    BOOL esi_5
                    
                    if (temp1_4 == 0)
                        esi_5 = var_350
                        sub_4d1c30(divs.dp.d(edx_24:eax_51, 0xa), var_330, *(edi + 0x20) + esi_5, 
                            eax_43)
                    else
                        if (temp1_4 == 1)
                            int32_t ecx_19 = 0
                            char* edx_29 = *(edi + 0x20) + var_350
                            int32_t edi_1 = 0
                            char* esi_4 = var_330
                            var_328.dwLowDateTime = 0
                            
                            if (eax_43 s> 0)
                                do
                                    if (edi_1 - 0x100 u> 0x100)
                                        int32_t eax_55
                                        eax_55.b = *esi_4
                                        *edx_29 = eax_55.b
                                        edx_29 = &edx_29[1]
                                        esi_4 = &esi_4[1]
                                    else
                                        char* ecx_20 = ecx_19 & 0x8000000f
                                        
                                        if (ecx_20 s< 0)
                                            ecx_20 = ((ecx_20 - 1) | 0xfffffff0) + 1
                                        
                                        int32_t eax_54
                                        eax_54.b = ecx_20[*data_1af412c]
                                        eax_54.b ^= *esi_4
                                        esi_4 = &esi_4[1]
                                        uint32_t dwLowDateTime = var_328.dwLowDateTime
                                        *edx_29 = eax_54.b
                                        edx_29 = &edx_29[1]
                                        ecx_19 = dwLowDateTime + 1
                                        var_328.dwLowDateTime = ecx_19
                                    
                                    edi_1 += 1
                                while (edi_1 s< eax_43)
                                
                                ebx = var_33c
                            
                            edi = var_354
                        
                        esi_5 = var_350
                    
                    sub_4d6c40(&var_320, &var_330)
                    int32_t eax_56
                    int32_t edx_31
                    edx_31:eax_56 = muls.dp.d(0x431bde83, *(edi + 4))
                    int32_t edx_32 = edx_31 s>> 0x12
                    
                    if (mods.dp.d(sx.q((edx_32 u>> 0x1f) + edx_32), 0xa) != 0)
                        int32_t edi_2 = 0
                        char* edx_37 = *(var_354 + 0x20) + esi_5
                        int32_t esi_6 = 0
                        
                        if (eax_43 s> 0)
                            do
                                if (esi_6 - 0x180 u<= 0x100)
                                    char* ecx_25 = edi_2 & 0x8000000f
                                    
                                    if (ecx_25 s< 0)
                                        ecx_25 = ((ecx_25 - 1) | 0xfffffff0) + 1
                                    
                                    int32_t eax_64
                                    eax_64.b = ecx_25[*data_1af411c]
                                    *edx_37 ^= eax_64.b
                                    edi_2 += 1
                                
                                esi_6 += 1
                                edx_37 = &edx_37[1]
                            while (esi_6 s< eax_43)
                            
                            ebx = var_33c
                    
                    BOOL esi_7 = var_350
                    *(arg2 + 0xc) = esi_7
                    int32_t eax_65
                    int32_t edx_38
                    edx_38:eax_65 = muls.dp.d(0x68db8bad, *(esi_7 + 4))
                    int32_t edx_39 = edx_38 s>> 0xc
                    int32_t eax_70
                    eax_70.b = mods.dp.d(sx.q((edx_39 u>> 0x1f) + edx_39), 0xa) != 2
                    *(arg2 + 0x10) = eax_70 + 1
                    *(arg2 + 0x14) = *(esi_7 + 8) + esi_7
                    int32_t eax_75 = *(esi_7 + 0x20) + esi_7
                    *(arg2 + 8) = esi_7
                    *(arg2 + 0x18) = eax_75
                    *(arg2 + 0x1c) = eax_43
                    *(arg2 + 4) = fileTime
                    *(arg3 + 0x34) = ebx
                
                result = 1
            else
                void* var_364_5 = ebx
                sub_4c84d0(&data_7027c0, 0x61aaa0)
                int32_t var_370_3 = mods.dp.d(sx.q(*(edi + 4)), 0x64)
                int32_t var_374_2 = 2
                char var_318[0x100]
                sub_4c84d0(&var_318, 0x61ab04)
                
                if (data_702fc0 != 0)
                    sub_55ef70(&var_318, data_72d6ac, data_719b6c, &data_7027c0, &var_318)
                    sub_55f1e0(&var_318, data_72d6ac, data_719b6c, &data_7027c0, &var_318)
                    sub_55f390(&var_318, data_72d6ac, data_719b6c, &data_7027c0, &var_318)
                    sub_4a1e40(3)
        else
            void* var_364_1 = ebx
            char* eax_29 = sub_4c84d0(&data_7027c0, 0x61aa04)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_29, data_72d6ac, data_719b6c, &data_7027c0, edi), 
                        data_72d6ac, data_719b6c, &data_7027c0, edi), 
                    data_72d6ac, data_719b6c, &data_7027c0, edi)
                sub_4a1e40(3)
        
        if (var_348 != 0)
            sub_4d6c40(&var_348, &var_354)
            sub_5f02dd(eax_1 ^ &var_354)
            return result

sub_5f02dd(eax_1 ^ &var_354)
return result
