// 函数: sub_5f5920
// 地址: 0x5f5920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd200
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t i_21 = *(arg1 + 0x1d0)
uint32_t i_17 = 0
uint32_t i_13 = 0
uint32_t i_9 = *(arg1 + 0x1e0)
uint32_t i_10 = 0
int32_t var_58 = 0
uint32_t i_15 = 0
uint32_t i_5 = i_9
uint32_t i_16 = i_21
void* esi

if (*(arg1 + 0xda0) u< 8)
    esi = arg1 + 0xd8c
else
    esi = *(arg1 + 0xd8c)

bool cond:1 = *(arg1 + 0xda0) u< 8
void* var_4c = esi
void* ecx

if (cond:1)
    ecx = arg1 + 0xd8c
else
    ecx = *(arg1 + 0xd8c)

void* edi = ecx + (*(arg1 + 0xd9c) << 1)
uint32_t i

while (true)
    if (*(arg1 + 0xda0) u< 8)
        i = arg1 + 0xd8c
    else
        i = *(arg1 + 0xd8c)
    
    if (esi == i + (*(arg1 + 0xd9c) << 1))
        break
    
    uint32_t i_6 = 0
    int32_t var_70 = 0
    uint32_t i_1 = 0
    i = 0
    
    if (esi == edi || *esi != 0x23)
        sub_64f180(&i, &var_70, &var_4c, edi, &i)
        esi = var_4c
        i_1 = i
    else
        var_4c = esi + 2
        
        if (esi + 2 == edi)
        label_5f5a6a:
            char eax_13 = sub_6af490(i_6, &i_10, &var_4c, edi)
            esi = var_4c
            
            if (eax_13 != 0)
                if (esi != edi)
                    uint32_t eax_14 = zx.d(*esi)
                    
                    if (eax_14 == 0x43)
                        uint32_t i_8 = i_10
                        esi += 2
                        var_4c = esi
                        i_5 = i_8
                        continue
                    else if (eax_14 == 0x53)
                        uint32_t i_11 = i_10
                        esi += 2
                        var_4c = esi
                        i_16 = i_11
                        continue
                
                int32_t var_18_1 = 7
                int32_t var_1c_1 = 0
                int16_t var_2c = 0
                int32_t* eax_15
                int32_t ecx_5
                eax_15, ecx_5 = sub_52e720(&var_2c, 0xaf2fbc, 2)
                int32_t var_a0_2 = ecx_5
                i_13.b = sub_6af310(eax_15, &var_2c, &var_4c, edi)
                sub_52e8a0(&var_2c)
                esi = var_4c
                
                if (i_13.b == 0)
                    if (esi != edi && *esi == 0x58)
                        i_13 = i_10
                        esi += 2
                        var_4c = esi
                        i_15 = i_13
                        continue
                    
                    int32_t var_30_1 = 7
                    int32_t var_34_1 = 0
                    int16_t var_44 = 0
                    int32_t* eax_17
                    int32_t ecx_9
                    eax_17, ecx_9 = sub_52e720(&var_44, 0xaf2fc4, 2)
                    int32_t var_a0_3 = ecx_9
                    i_13.b = sub_6af310(eax_17, &var_44, &var_4c, edi)
                    sub_52e8a0(&var_44)
                    esi = var_4c
                    
                    if (i_13.b == 0)
                        if (esi != edi && *esi == 0x59)
                            uint32_t i_12 = i_10
                            esi += 2
                            i_13 = i_15
                            var_4c = esi
                            i_17 = i_12
                            continue
                        
                        i_13 = i_15
                    else
                        i_13 = i_15
                        i_17 += i_10
                        continue
                else
                    i_13 = i_15 + i_10
                    i_15 = i_13
                    continue
        else
            i_6 = zx.d(*(esi + 2))
            
            if (i_6 != 0x23)
                if (i_6 == 0x44)
                    int32_t eax_9 = data_bac510
                    esi += 4
                    var_4c = esi
                    var_58 = 0
                    int32_t eax_10 = *(arg1 + 0x1d8)
                    
                    if (*(eax_9 + 0x10bd8) != 1)
                        i_13 = 0
                        i_17 += eax_10 + i_16
                        i_15 = 0
                        continue
                    else
                        i_13 -= eax_10 + i_16
                        i_15 = i_13
                        i_17 = 0
                        continue
                
                goto label_5f5a6a
            
            esi += 4
            i_1 = i_6
            var_4c = esi
    
    int32_t edx_5 = data_b9c398
    int32_t eax_25
    
    if (*(arg1 + 0x1dc) s> 0)
        bool cond:3_1 = var_70 != 0
        uint32_t i_2 = 2
        i = 2
        
        if (not(cond:3_1))
            if ((edx_5.b & 1) == 0)
                data_b9c398 = edx_5 | 1
                sub_6ad730()
                edx_5 = data_b9c398
                i_2 = i
            
            if (*(zx.d(i_1.w) + 0xb9c3a0) == 1)
                i_2 = 1
            
            i = i_2
        
        eax_25 = *(arg1 + 0x1dc)
    
    uint32_t i_19
    
    if (*(arg1 + 0x1dc) s<= 0 || var_58 + i s<= eax_25 * 2)
        i_19 = i_17
    else
        var_58 = 0
        int32_t eax_29 = *(arg1 + 0x1d8)
        
        if (*(data_bac510 + 0x10bd8) != 1)
            i_13 = 0
            i_19 = i_17 + eax_29 + i_16
            i_15 = 0
            i_17 = i_19
        else
            i_13 -= eax_29 + i_16
            i_19 = 0
            i_15 = i_13
            i_17 = 0
    
    int32_t var_88 = var_70
    uint32_t i_4 = i_1
    uint32_t i_22 = i_19
    uint32_t i_14 = i_13
    uint32_t i_7 = ((*(data_bac4c0 + 4) - *data_bac4c0) s>> 2) - 1
    
    if (i_5 s>= 0)
        uint32_t i_3 = i_5
        
        if (i_3 s> i_7)
            i_3 = i_7
        
        i = i_3
    else
        i = 0
    
    uint32_t i_20 = i_17
    int32_t var_74_1 = *(*data_bac4c0 + (i << 2))
    uint32_t i_18 = i_16
    
    if (*(data_bac510 + 0x10bd8) != 1)
        if (var_70 != 0)
            var_58 += 2
            i_13 += *(arg1 + 0x1d4) + i_16
        
        if ((edx_5.b & 1) == 0)
            data_b9c398 = edx_5 | 1
            sub_6ad730()
        
        int32_t eax_67
        
        if (*(zx.d(i_1.w) + 0xb9c3a0) != 1)
            var_58 += 2
            eax_67 = *(arg1 + 0x1d4) + i_16
        else
            var_58 += 1
            int32_t eax_64
            int32_t edx_11
            edx_11:eax_64 = sx.q(i_16 + 1)
            eax_67 = ((eax_64 - edx_11) s>> 1) + *(arg1 + 0x1d4)
        
        i_13 += eax_67
        i_15 = i_13
    else
        if (var_70 != 0)
            var_58 += 2
            i_20 += *(arg1 + 0x1d4) + i_16
            i_17 = i_20
        
        if ((edx_5.b & 1) == 0)
            data_b9c398 = edx_5 | 1
            sub_6ad730()
            i_20 = i_17
        
        if (*(zx.d(i_1.w) + 0xb9c3a0) != 1)
            var_58 += 2
            i_17 = i_20 + *(arg1 + 0x1d4) + i_16
        else
            var_58 += 1
            int32_t eax_50
            int32_t edx_8
            edx_8:eax_50 = sx.q(i_16 + 1)
            i_17 = i_20 + ((eax_50 - edx_8) s>> 1) + *(arg1 + 0x1d4)
    
    sub_5f6650(arg1 + 0x154c, &var_88)

int32_t eax_70
int32_t edx_13
edx_13:eax_70 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x1550) - *(arg1 + 0x154c))
int32_t edx_14 = edx_13 s>> 2
sub_5f5160(arg1 + 0x1588, ((edx_14 u>> 0x1f) + edx_14) * 3)
i = 0
int32_t eax_75
int32_t edx_15
edx_15:eax_75 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x1550) - *(arg1 + 0x154c))
int32_t edx_16 = edx_15 s>> 2

if (((edx_16 u>> 0x1f) + edx_16) * 3 s> 0)
    int32_t esi_2 = 0
    int32_t ecx_36
    
    do
        *(*(arg1 + 0x1588) + esi_2) = 2
        int32_t eax_80 = data_4ebe2bc
        int32_t* eax_81 = data_4ebe2c0
        
        if (eax_81 != 0)
            eax_81[1]
            eax_81[1] += 1
        
        operator new(*(arg1 + 0x1588) + esi_2, eax_80, eax_81)
        int32_t eax_83 = data_4ebe2ec
        int32_t* eax_84 = data_4ebe2f0
        
        if (eax_84 != 0)
            eax_84[1]
            eax_84[1] += 1
        
        operator new[](*(arg1 + 0x1588) + esi_2, eax_83, eax_84)
        ecx_36 = *(arg1 + 0x1550) - *(arg1 + 0x154c)
        esi_2 += 0x130
        i += 1
    while (i s< ecx_36 s/ 0x18 * 3)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
