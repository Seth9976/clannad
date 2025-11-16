// 函数: sub_6291d0
// 地址: 0x6291d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c0449
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result_1
sub_5b9470(&result_1, (arg4 * arg2) << 2)
int32_t var_8_1 = 0
void* result_3 = result_1
int32_t var_34c

if (arg6 == 0)
    int32_t esi_1 = 0
    
    if (arg4 s> 0)
        int32_t ecx_4 = 0
        int32_t var_344_2 = 0
        
        do
            char* edx_5 = *arg5 * esi_1 + arg5[1]
            void* const result_5 = result_3
            
            if (result_3 == var_34c)
                result_5 = nullptr
            
            char* eax_11 = result_5 + ecx_4
            void* edi_2 = &eax_11[arg2 << 2]
            
            if (eax_11 != edi_2)
                do
                    char ecx_5 = *edx_5
                    edx_5 = &edx_5[4]
                    *eax_11 = ecx_5
                    eax_11[1] = edx_5[0xfffffffd]
                    eax_11[2] = edx_5[0xfffffffe]
                    eax_11[3] = 0xff
                    eax_11 = &eax_11[4]
                while (eax_11 != edi_2)
                
                ecx_4 = var_344_2
            
            esi_1 += 1
            result_3 = result_1
            ecx_4 += arg2 << 2
            var_344_2 = ecx_4
        while (esi_1 s< arg4)
else
    int32_t esi = 0
    
    if (arg4 s> 0)
        int32_t eax_7 = arg2 << 2
        void* ecx_1 = nullptr
        void* var_344_1 = nullptr
        
        do
            char* edx_2 = *arg5 * esi + arg5[1]
            void* result_4 = result_3
            
            if (result_3 == var_34c)
                result_4 = nullptr
            
            void* ecx_2 = ecx_1 + result_4
            int32_t eax_9 = eax_7
            void* edi = eax_9 + ecx_2
            
            if (ecx_2 != edi)
                do
                    eax_9.b = *edx_2
                    edx_2 = &edx_2[4]
                    *ecx_2 = eax_9.b
                    eax_9.b = edx_2[0xfffffffd]
                    *(ecx_2 + 1) = eax_9.b
                    eax_9.b = edx_2[0xfffffffe]
                    *(ecx_2 + 2) = eax_9.b
                    eax_9.b = edx_2[0xffffffff]
                    *(ecx_2 + 3) = eax_9.b
                    ecx_2 += 4
                while (ecx_2 != edi)
                
                eax_9 = eax_7
            
            esi += 1
            result_3 = result_1
            ecx_1 = var_344_1 + eax_9
            var_344_1 = ecx_1
        while (esi s< arg4)

int32_t** var_368
sub_5f1250(&var_368, arg4)
int32_t** edi_3 = var_368
int32_t ecx_9 = 0

if (arg4 s> 0)
    void* result_2 = result_1
    int32_t edx_7 = 0
    
    do
        void* result_6 = result_2
        
        if (result_2 == var_34c)
            result_6 = nullptr
        
        edi_3[ecx_9] = result_6 + edx_7
        ecx_9 += 1
        edi_3 = var_368
        edx_7 += arg2 << 2
    while (ecx_9 s< arg4)

int32_t* var_378 = nullptr
int64_t var_370 = 0
var_8_1.b = 2
void* const var_38c_2 = 2
int32_t var_1c = 7
int32_t* var_390 = &data_af4594
int32_t var_20 = 0
int16_t var_30 = 0
sub_52e720(&var_30, var_390, var_38c_2)
var_8_1.b = 3
var_8_1.b = 2
char* ebx
ebx.b = sub_6b7a80(&var_378, arg3, &var_30) == 0

if (var_1c u>= 8)
    j__free(var_30.d)

if (ebx.b == 0)
    int32_t* eax_16 = sub_6ca300()
    ebx = eax_16
    char* esi_2
    
    if (ebx != 0)
        int32_t eax_17 = *(ebx + 0x254)
        uint32_t var_38c_5 = 0x10c
        char* eax_18
        
        if (eax_17 == 0)
            eax_18 = _malloc(var_38c_5)
        else
            eax_18 = eax_17(ebx, var_38c_5, eax_2)
        
        esi_2 = eax_18
        
        if (esi_2 != 0)
            _memset(esi_2, 0, 0x10c)
        
        eax_16 = var_378
        *(ebx + 0x60) = eax_16
    else
        esi_2 = nullptr
    
    sub_6ce130(eax_16, esi_2, ebx, arg2, arg4, 8, 6, 0, 0, 0)
    sub_6c9e50(ebx, esi_2)
    
    if (ebx != 0)
        *(ebx + 0x7c) |= 1
    
    int32_t** edx_10 = edi_3
    int32_t var_364
    
    if (edi_3 == var_364)
        edx_10 = nullptr
    
    sub_6ca3d0(ebx, edx_10)
    int32_t eax_19 = sub_6ca1a0(ebx, esi_2)
    
    if (ebx != 0)
        if (esi_2 != 0)
            sub_6cafa0(eax_19, esi_2, ebx, 0x7fff, 0xffffffff)
            _memset(esi_2, 0, 0x10c)
            int32_t eax_20 = *(ebx + 0x258)
            
            if (eax_20 == 0)
                _free(esi_2)
            else
                eax_20(ebx, esi_2, eax_2)
        
        sub_6ca800(ebx)
        int32_t var_38c_10 = 0x308
        char var_390_7 = 0
        void var_338
        struct _EXCEPTION_REGISTRATION_RECORD* esi_4 = __builtin_memcpy(&var_338, ebx, 0x308)
        _memset(ebx, var_390_7, var_38c_10)
        int32_t var_e0
        
        if (var_e0 == 0)
            _free(ebx)
        else
            var_e0(&var_338, ebx, eax_2)
        
        sub_6d4930(&var_338, esi_4)
        edi_3 = var_368
    
    ebx.b = 1
else
    ebx.b = 0

var_8_1.b = 1

if (sub_6b73d0(var_378) != 0)
    var_378 = nullptr
    int64_t var_370_1 = 0

if (edi_3 != 0)
    j__free(edi_3)

void* result = result_1

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
