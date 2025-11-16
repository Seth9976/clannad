// 函数: sub_612500
// 地址: 0x612500
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bee02
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2b8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg1
int32_t var_2a0 = ebx
void var_278
sub_6efae0(&var_278)
int128_t var_158 = zx.o(0)
int32_t var_8_1 = 0
void* var_298 = nullptr
int32_t var_294 = 0
int32_t var_290 = 0
var_8_1.b = 1
void* var_29c = &var_278
int32_t edx = ebx * 0x8ec
sub_6094f0(*(data_bac408 + 0xa4) + edx, &var_29c, arg2, arg3, arg4, arg5)
int32_t* var_284 = nullptr
int32_t var_280 = 0
int32_t var_27c = 0
var_8_1.b = 2
sub_613140(&var_29c, &var_284)
void* edi = data_bac480
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = muls.dp.d(0x51eb851f, *(edi + 0x148) - *(edi + 0x144))
int32_t edx_2 = edx_1 s>> 8
int32_t i_14 = (edx_2 u>> 0x1f) + edx_2

if (i_14 s> 0)
    int32_t esi_1 = 0
    int32_t i_7 = i_14
    int32_t i
    
    do
        sub_612360(&var_284, *(edi + 0x144) + esi_1)
        esi_1 += 0x320
        i = i_7
        i_7 -= 1
    while (i != 1)
    ebx = var_2a0

if (*(data_bac458 + 0x48e) == 0)
    int32_t i_10 = (*(edi + 0x210) - *(edi + 0x20c)) s/ 0xe8
    
    if (i_10 s> 0)
        void* ebx_1 = data_bac480
        int32_t esi_2 = 0
        int32_t i_1
        
        do
            sub_612440(&var_284, *(ebx_1 + 0x20c) + esi_2)
            esi_2 += 0xe8
            i_1 = i_10
            i_10 -= 1
        while (i_1 != 1)
        ebx = var_2a0

void* esi_4 = data_bac408
void* eax_10 = *(esi_4 + 0xa4) + edx
int32_t eax_11
int32_t edx_10
edx_10:eax_11 = muls.dp.d(0x51eb851f, *(eax_10 + 0x824) - *(eax_10 + 0x820))
int32_t edx_11 = edx_10 s>> 8
int32_t i_11 = (edx_11 u>> 0x1f) + edx_11

if (i_11 s> 0)
    int32_t esi_3 = 0
    int32_t i_2
    
    do
        sub_612360(&var_284, *(sub_610ea0(0, ebx) + 0x820) + esi_3)
        esi_3 += 0x320
        i_2 = i_11
        i_11 -= 1
    while (i_2 != 1)
    esi_4 = data_bac408

if (*(data_bac458 + 0x48e) == 0)
    void* eax_15 = *(esi_4 + 0xa4) + edx
    int32_t i_8 = (*(eax_15 + 0x8dc) - *(eax_15 + 0x8d8)) s/ 0xe8
    
    if (i_8 s> 0)
        int32_t edi_5 = 0
        int32_t i_3
        
        do
            sub_612440(&var_284, *(sub_610ea0(0, ebx) + 0x8d8) + edi_5)
            edi_5 += 0xe8
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)

void* edx_21 = data_bac4a0
int32_t* eax_18 = var_284

if (*(edx_21 + 0x1a8) == 4 && eax_18 != var_280)
    do
        void* ecx_18 = *eax_18
        eax_18 = &eax_18[1]
        *(ecx_18 + 0x1c) = _mm_cvtepi32_ps(zx.o(*(edx_21 + 0x1bc))) f+ *(ecx_18 + 0x1c)
        *(ecx_18 + 0x20) = _mm_cvtepi32_ps(zx.o(*(edx_21 + 0x1c0))) f+ *(ecx_18 + 0x20)
    while (eax_18 != var_280)
    
    eax_18 = var_284

if (eax_18 != 0)
    j__free(eax_18)
    var_284 = nullptr
    int32_t var_280_1 = 0
    int32_t var_27c_1 = 0

void* eax_19 = var_298

if (eax_19 != 0)
    void* esi_7 = eax_19
    
    if (eax_19 != var_294)
        do
            sub_5b4b40(esi_7)
            esi_7 += 0x10
        while (esi_7 != var_294)
        
        eax_19 = var_298
    
    j__free(eax_19)

int32_t var_8_2 = 0xffffffff
sub_6efc80(&var_278)
int32_t* result
result.b = data_bac41c[0x219].b

if (result.b != 0)
    void var_148
    sub_6efae0(&var_148)
    int128_t var_28_1 = zx.o(0)
    int32_t var_8_3 = 3
    var_284 = nullptr
    void* var_280_2 = nullptr
    int32_t var_27c_2 = 0
    var_8_3.b = 4
    void* var_288 = &var_148
    sub_6094f0(*(data_bac41c + 0x6b8) + edx, &var_288, arg2, arg3, arg4, arg5)
    var_298 = nullptr
    void** var_294_1 = nullptr
    int32_t var_290_1 = 0
    var_8_3.b = 5
    void* edi_7 = var_288
    
    if (*edi_7 != 0 && *(edi_7 + 4) != 0)
        sub_530c80(&var_298, 1)
        void** eax_21 = var_294_1
        
        if (eax_21 != 0)
            *eax_21 = edi_7
            eax_21 = var_294_1
        
        void* var_294_2 = &eax_21[1]
    
    int32_t* ecx_25 = var_284
    int32_t i_9 = (var_280_2 - ecx_25) s>> 4
    
    if (i_9 s> 0)
        if (*(edi_7 + 0x12c) == 0 && ecx_25 != var_280_2)
            sub_613530(ecx_25, var_280_2)
            ecx_25 = var_284
        
        if (i_9 s> 0)
            int32_t* edi_8 = ecx_25
            int32_t i_4
            
            do
                sub_613140(edi_8, &var_298)
                edi_8 = &edi_8[4]
                i_4 = i_9
                i_9 -= 1
            while (i_4 != 1)
            ebx = var_2a0
    
    void* esi_11 = data_bac41c
    void* edx_24 = *(esi_11 + 0x6b8) + edx
    int32_t eax_24
    int32_t edx_25
    edx_25:eax_24 = muls.dp.d(0x51eb851f, *(edx_24 + 0x824) - *(edx_24 + 0x820))
    int32_t edx_26 = edx_25 s>> 8
    int32_t i_12 = (edx_26 u>> 0x1f) + edx_26
    
    if (i_12 s> 0)
        int32_t esi_10 = 0
        int32_t i_5
        
        do
            sub_612360(&var_298, *(sub_610ea0(1, ebx) + 0x820) + esi_10)
            esi_10 += 0x320
            i_5 = i_12
            i_12 -= 1
        while (i_5 != 1)
        esi_11 = data_bac41c
    
    if (*(data_bac458 + 0x48e) == 0)
        void* ecx_31 = *(esi_11 + 0x6b8) + edx
        int32_t i_13 = (*(ecx_31 + 0x8dc) - *(ecx_31 + 0x8d8)) s/ 0xe8
        
        if (i_13 s> 0)
            int32_t esi_14 = 0
            int32_t i_6
            
            do
                sub_612440(&var_298, *(sub_610ea0(1, ebx) + 0x8d8) + esi_14)
                esi_14 += 0xe8
                i_6 = i_13
                i_13 -= 1
            while (i_6 != 1)
    
    void* eax_29 = var_298
    
    if (eax_29 != 0)
        j__free(eax_29)
        var_298 = nullptr
        int32_t var_294_3 = 0
        int32_t var_290_2 = 0
    
    int32_t* ebx_3 = var_284
    
    if (ebx_3 != 0)
        int32_t* esi_15 = ebx_3
        
        if (ebx_3 != var_280_2)
            do
                sub_5b4b40(esi_15)
                esi_15 = &esi_15[4]
            while (esi_15 != var_280_2)
        
        j__free(ebx_3)
    
    int32_t var_8_4 = 0xffffffff
    sub_6efc80(&var_148)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
