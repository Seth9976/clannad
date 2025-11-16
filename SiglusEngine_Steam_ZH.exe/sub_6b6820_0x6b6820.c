// 函数: sub_6b6820
// 地址: 0x6b6820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb242
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_338 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t var_220 = 0
int32_t var_324 = 0
char var_21e[0x206]
_memset(&var_21e, 0, 0x206)
int16_t* eax_5

if (arg4[5] u< 8)
    eax_5 = arg4
else
    eax_5 = *arg4

_wcscpy_s(&var_220, 0x104, eax_5)
int32_t* var_250
sub_6b3f00(&var_250, arg4)
int32_t var_8_1 = 0
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
int32_t var_224 = 7
int32_t edx_2 = edx_1 s>> 2
int32_t var_228 = 0
int32_t i_3 = (edx_2 u>> 0x1f) + edx_2
int16_t var_238 = 0
int32_t i_2 = i_3
int32_t edi = 0
int32_t* esi_1 = nullptr
int32_t ebx_1 = 0
int32_t var_2ac = 0
int32_t* var_2a8 = nullptr
int32_t var_2a4 = 0
var_8_1.b = 2
int32_t var_2b8 = 0

if (i_3 s> 0)
    int32_t eax_9 = 0
    int32_t var_29c_1 = 0
    int32_t i
    
    do
        int32_t var_298
        int16_t* eax_10 = sub_532b80(eax_9, *arg1 + eax_9, &var_298, 0xaf4300)
        var_8_1.b = 3
        void** eax_13 = arg1[3] + var_29c_1
        int16_t var_268
        int16_t* eax_14 = sub_5327a0(eax_13, eax_10, &var_268, eax_13)
        var_8_1.b = 4
        var_8_1.b = 5
        int16_t var_280
        sub_532870(&var_238, sub_532b80(eax_14, eax_14, &var_280, 0xaf4300), 0, 0xffffffff)
        int32_t var_26c
        
        if (var_26c u>= 8)
            j__free(var_280.d)
        
        var_26c = 7
        int32_t var_270_1 = 0
        var_280 = 0
        int32_t var_254
        
        if (var_254 u>= 8)
            j__free(var_268.d)
        
        var_8_1.b = 2
        var_254 = 7
        int32_t var_258_1 = 0
        var_268 = 0
        int32_t var_284
        
        if (var_284 u>= 8)
            j__free(var_298)
        
        int32_t edx_8 = var_29c_1
        int32_t eax_18 = *(*arg1 + edx_8 + 0x10) + var_2b8
        int32_t* ecx_8 = arg1
        int32_t var_2bc = eax_18
        
        if (&var_2bc u< esi_1)
            edx_8 = var_29c_1
        
        if (&var_2bc u>= esi_1 || edi u> &var_2bc)
            if (esi_1 == ebx_1)
                sub_55d250(&var_2ac, 1)
                ebx_1 = var_2a4
                esi_1 = var_2a8
                edi = var_2ac
                edx_8 = var_29c_1
                ecx_8 = arg1
            
            if (esi_1 != 0)
                *esi_1 = eax_18
        else
            int32_t eax_20 = (&var_2bc - edi) s>> 2
            
            if (esi_1 == ebx_1)
                sub_55d250(&var_2ac, 1)
                ebx_1 = var_2a4
                esi_1 = var_2a8
                edi = var_2ac
                edx_8 = var_29c_1
                ecx_8 = arg1
            
            if (esi_1 != 0)
                *esi_1 = *(edi + (eax_20 << 2))
        
        void* esi_2 = &esi_1[1]
        int32_t eax_24 = *(edx_8 + ecx_8[3] + 0x10) + *(*ecx_8 + edx_8 + 0x10) + var_2b8 + 1
        int32_t var_2b4 = eax_24
        
        if (&var_2b4 u>= esi_2 || edi u> &var_2b4)
            if (esi_2 == ebx_1)
                sub_55d250(&var_2ac, 1)
                ebx_1 = var_2a4
                edi = var_2ac
                edx_8 = var_29c_1
                eax_24 = var_2b4
            
            if (esi_2 != 0)
                *esi_2 = eax_24
        else
            int32_t eax_26 = (&var_2b4 - edi) s>> 2
            
            if (esi_2 == ebx_1)
                sub_55d250(&var_2ac, 1)
                ebx_1 = var_2a4
                edi = var_2ac
                edx_8 = var_29c_1
            
            if (esi_2 != 0)
                *esi_2 = *(edi + (eax_26 << 2))
        
        esi_1 = esi_2 + 4
        var_2a8 = esi_1
        var_29c_1 = edx_8 + 0x18
        i = i_2
        i_2 -= 1
        var_2b8 = var_2b8 + 2 + *(edx_8 + arg1[3] + 0x10) + *(*arg1 + edx_8 + 0x10)
        eax_9 = edx_8 + 0x18
    while (i != 1)

int32_t edx_10 = 0
int32_t esi_4 = (esi_1 - edi) s>> 2

if (esi_4 s> 0)
    do
        int16_t* eax_30 = &var_238
        int32_t ecx_21 = *(edi + (edx_10 << 2))
        
        if (var_224 u>= 8)
            eax_30 = var_238.d
        
        edx_10 += 1
        eax_30[ecx_21] = 0
    while (edx_10 s< esi_4)

int32_t param0
_memset(&param0, 0, 0x58)
int32_t var_318 = data_4ebe3a8
int32_t var_31c = data_4ebe3ac
int16_t* eax_33 = &var_238

if (var_224 u>= 8)
    eax_33 = var_238.d

int16_t* var_314 = eax_33
int16_t* var_304 = &var_220
int32_t* eax_34 = arg3
param0 = 0x58
int32_t var_308 = 0
int32_t var_310 = 0
int32_t var_30c = 0
int32_t var_300 = 0x104
int32_t var_2fc = 0
int32_t var_2f8 = 0
int32_t var_2f4 = 0

if (eax_34[5] u>= 8)
    eax_34 = *eax_34

int32_t* var_2f0 = eax_34
int32_t var_2e8 = 0
int32_t* eax_35 = &var_250
int32_t var_23c

if (var_23c u>= 8)
    eax_35 = var_250

int32_t* var_2e4 = eax_35
int32_t var_2ec = 0x80002
int32_t var_2e0 = 0
int32_t var_2dc = 0
int32_t var_2d8 = 0
BOOL eax_36 = GetSaveFileNameW(&param0)
*(arg2 + 0x14) = 7
*(arg2 + 0x10) = 0
int32_t* var_340
BOOL var_33c_6

if (eax_36 != 0)
    *arg2 = 0
    BOOL ecx_22
    
    if (var_220 != 0)
        int16_t* ecx_23 = &var_220
        int16_t i_1
        
        do
            i_1 = *ecx_23
            ecx_23 = &ecx_23[1]
        while (i_1 != 0)
        ecx_22 = (ecx_23 - &var_21e) s>> 1
    else
        ecx_22 = 0
    
    var_33c_6 = ecx_22
    var_340 = &var_220
else
    var_33c_6 = eax_36
    *arg2 = eax_36.w
    var_340 = &data_ad7c90

sub_52e720(arg2, var_340, var_33c_6)

if (edi != 0)
    j__free(edi)

if (var_224 u>= 8)
    j__free(var_238.d)

int32_t var_224_1 = 7
var_238 = 0
int32_t var_228_1 = 0

if (var_23c u>= 8)
    j__free(var_250)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2
