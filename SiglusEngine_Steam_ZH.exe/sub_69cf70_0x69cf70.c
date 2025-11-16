// 函数: sub_69cf70
// 地址: 0x69cf70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??$_Insert@V?$move_iterator@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@std@@@std@@@std@@@std@@@std@@@?$vector@V?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@std@@V?$allocator@V?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@std@@@2@@std@@QAEXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@std@@@std@@@std@@@1@V?$move_iterator@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@std@@@std@@@std@@@std@@@1@1Uforward_iterator_tag@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_88 = ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0
int32_t var_54 = arg2
int32_t var_50 = arg3
uint32_t var_4c = arg4
int32_t var_48 = arg5
void** eax_8 = sub_69e130(&var_54)
void** edi = data_4ebe380
char eax_10

if (eax_8 != edi)
    eax_10 = sub_69cee0(&var_54, &eax_8[4])

void*** eax_11

if (eax_8 == edi || eax_10 != 0)
    void** var_28 = edi
    eax_11 = &var_28
else
    void** var_24 = eax_8
    eax_11 = &var_24

void** eax_12 = *eax_11

if (eax_12 != edi)
    eax_12[0xd] = data_4ebe38c
    *arg1 = eax_12[9]
    void* ecx_4 = eax_12[0xa]
    arg1[1] = ecx_4
    
    if (ecx_4 != 0)
        *(ecx_4 + 4)
        *(ecx_4 + 4) += 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

if (data_4ebe384 != 0)
    void** eax_14 = *edi
    int32_t var_18_1 = 0
    void** esi_2 = edi
    int32_t var_1c_1 = 0
    int32_t var_20_1 = 0
    void** var_14 = eax_14
    
    if (eax_14 != edi)
        ebx = 0
        
        do
            void* eax_15 = eax_14[0xa]
            
            if (eax_15 != 0 && *(eax_15 + 4) == 1)
                void** eax_17 = var_14
                int32_t ecx_9 = data_4ebe38c - eax_17[0xd]
                int32_t edx_2 = eax_17[0xb]
                
                if (edx_2 s>= 0x30 && ebx s< edx_2)
                    ebx = edx_2
                    esi_2 = eax_17
                else if (ebx s> 3 || ecx_9 u<= 0x3e8)
                    if (data_4ebe384 u>= 0x200)
                        if (ebx s> 2 || eax_17[0xc].b != 0)
                            if (ebx s<= 1 && (ebx s< 1 || var_20_1 u< ecx_9))
                                ebx = 1
                                var_20_1 = ecx_9
                                esi_2 = eax_17
                        else if (ebx s< 2 || var_1c_1 u< ecx_9)
                            ebx = 2
                            var_1c_1 = ecx_9
                            esi_2 = eax_17
                else if (ebx s< 3 || var_18_1 u< ecx_9)
                    ebx = 3
                    var_18_1 = ecx_9
                    esi_2 = eax_17
            
            sub_563d80(&var_14)
            eax_14 = var_14
        while (eax_14 != edi)
        
        int32_t* var_30
        
        if (esi_2 != edi)
            sub_69dc80(&var_30, esi_2)

if (arg3 s< 0x3041)
    if (arg3 == 0x3000 || arg3 == 0x3001 || arg3 == 0x3002 || arg3 == 0xff1f || arg3 == 0xff01
            || arg3 == 0x30fc || arg3 == 0x2026 || arg3 == 0x2025 || arg3 == 0x30fb
            || arg3 == 0x2500 || arg3 == 0x2015 || arg3 == 0x300c || arg3 == 0x300d
            || arg3 == 0x300e || arg3 == 0x300f || arg3 == 0xff08 || arg3 == 0xff09
            || arg3 == 0x3010 || arg3 == 0x3011 || arg3 == 0x79c1 || arg3 == 0x4ffa
            || arg3 == 0x50d5)
        ebx.b = 1
    else
        ebx.b = 0
else if (arg3 s<= 0x3093 || arg3 == 0x3000 || arg3 == 0x3001 || arg3 == 0x3002 || arg3 == 0xff1f
        || arg3 == 0xff01 || arg3 == 0x30fc || arg3 == 0x2026 || arg3 == 0x2025 || arg3 == 0x30fb
        || arg3 == 0x2500 || arg3 == 0x2015 || arg3 == 0x300c || arg3 == 0x300d || arg3 == 0x300e
        || arg3 == 0x300f || arg3 == 0xff08 || arg3 == 0xff09 || arg3 == 0x3010 || arg3 == 0x3011
        || arg3 == 0x79c1 || arg3 == 0x4ffa || arg3 == 0x50d5)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_6c = 0
int32_t var_68 = 0
int32_t var_8_1 = 1
int32_t var_70 = arg6
int128_t var_80 = var_54.o
void* var_38
void** eax_19 = sub_69d3a0(&var_38, arg2, arg3, arg4, arg5.w, arg6, arg7)
void* edx_3 = *eax_19
int32_t* ecx_12 = eax_19[1]
eax_19[1] = 0
*eax_19 = nullptr
var_8_1.b = 1
int32_t* var_34

if (var_34 != 0)
    bool cond:0_1 = var_34[1] != 1
    var_34[1]
    var_34[1] -= 1
    
    if (not(cond:0_1))
        (*(*var_34 + 4))(eax_2)
        bool cond:2_1 = var_34[2] != 1
        var_34[2]
        var_34[2] -= 1
        
        if (not(cond:2_1))
            (*(*var_34 + 8))()

int32_t var_5c = data_4ebe38c
uint32_t var_64 = arg4
char var_60 = ebx.b
int32_t var_58 = 0

if (*data_bac4a0 != 0)
    int32_t eax_26 = 1
    
    if (arg4 s> 1)
        do
            eax_26 *= 2
        while (eax_26 s< arg4)
    
    int32_t var_58_1 = (eax_26 * eax_26) << 2

int32_t* eax_29
void* ecx_17
eax_29, ecx_17 = sub_69e1b0(&var_80)
int32_t* var_98_5 = eax_29
void* var_9c_3 = &eax_29[4]
void* var_40
sub_69e1e0(&var_40, ecx_17)
int32_t ecx_18 = data_4ebe388
data_4ebe38c += 1

if (ecx_18 s< data_4ebe384)
    ecx_18 = data_4ebe384

data_4ebe388 = ecx_18
*arg1 = edx_3
arg1[1] = ecx_12

if (ecx_12 != 0)
    ecx_12[1]
    ecx_12[1] += 1

int32_t var_2c_1 = 1
var_8_1.b = 0

if (ecx_12 != 0)
    bool cond:3_1 = ecx_12[1] != 1
    ecx_12[1]
    ecx_12[1] -= 1
    
    if (not(cond:3_1))
        (*(*ecx_12 + 4))(eax_2)
        int32_t edi_1 = ecx_12[2]
        ecx_12[2] -= 1
        
        if (edi_1 == 1)
            (*(*ecx_12 + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
