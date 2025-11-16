// 函数: sub_700500
// 地址: 0x700500
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ce942
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_624
int32_t var_1c = __security_cookie ^ &var_624
int32_t* entry_ebx
int32_t* var_628 = entry_ebx
int32_t esi
int32_t var_62c = esi
int32_t edi
int32_t var_630 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_5fc = arg3
int32_t* eax_6 = *arg3
(*(*eax_6 + 0x18))(eax_6, __security_cookie ^ &var_630)
int32_t edi_1 = 0
int32_t* esi_1 = nullptr
int32_t ebx = 0
var_624 = 0
int32_t var_620 = 0
int32_t var_61c = 0
int32_t var_10_1 = 0
int32_t var_5fc_1
__builtin_memset(&var_5fc_1, 0, 0x18)
var_10_1.b = 2
int32_t var_5d0 = 7
void* var_5d4 = nullptr
int16_t var_5e4 = 0
sub_52e720(&var_5e4, u"effect\", 7)
var_10_1.b = 3
sub_532910(&var_5e4, u"shadow_map", 0xa)
int32_t* var_640

if (arg4 == 0)
    var_640 = u"_frm"
else
    var_640 = u"_skn"

sub_532910(&var_5e4, var_640, 4)
int32_t* var_600
int32_t* eax_8 = *var_600
void var_22c
int32_t ecx_4 = (*(*eax_8 + 0x1c))(eax_8, &var_22c)
int32_t* var_5ec
int16_t var_234

if (var_234 != 0xff)
    void var_22e
    void* eax_9 = &var_22e
    void* var_61c_1 = &var_22e
    
    do
        if (*eax_9 == 0)
            int32_t var_618 = 1
            
            if (&var_618 u>= esi_1 || edi_1 u> &var_618)
                if (esi_1 == ebx)
                    int32_t var_644_2 = ecx_4
                    sub_530c10(&var_62c)
                    ebx = var_624
                    esi_1 = var_628
                    edi_1 = var_62c
                
                if (esi_1 != 0)
                    *esi_1 = 1
            else
                int32_t eax_11 = (&var_618 - edi_1) s>> 2
                
                if (esi_1 == ebx)
                    int32_t var_644_1 = ecx_4
                    sub_530c10(&var_62c)
                    ebx = var_624
                    esi_1 = var_628
                    edi_1 = var_62c
                
                if (esi_1 != 0)
                    *esi_1 = *(edi_1 + (eax_11 << 2))
            
            esi_1 = &esi_1[1]
            var_628 = esi_1
            ecx_4 = sub_532910(&var_5ec, 0xb082d8, 2)
            eax_9 = var_61c_1
        
        if (*eax_9 == 1)
            int32_t var_610 = 2
            
            if (&var_610 u>= esi_1 || edi_1 u> &var_610)
                if (esi_1 == ebx)
                    int32_t var_644_4 = ecx_4
                    sub_530c10(&var_62c)
                    ebx = var_624
                    esi_1 = var_628
                    edi_1 = var_62c
                
                if (esi_1 != 0)
                    *esi_1 = 2
            else
                int32_t eax_14 = (&var_610 - edi_1) s>> 2
                
                if (esi_1 == ebx)
                    int32_t var_644_3 = ecx_4
                    sub_530c10(&var_62c)
                    ebx = var_624
                    esi_1 = var_628
                    edi_1 = var_62c
                
                if (esi_1 != 0)
                    *esi_1 = *(edi_1 + (eax_14 << 2))
            
            esi_1 = &esi_1[1]
            var_628 = esi_1
            ecx_4 = sub_532910(&var_5ec, 0xb0869c, 3)
            eax_9 = var_61c_1
        
        if (*eax_9 == 2)
            int32_t var_60c = 4
            
            if (&var_60c u>= esi_1 || edi_1 u> &var_60c)
                if (esi_1 == ebx)
                    int32_t var_644_6 = ecx_4
                    sub_530c10(&var_62c)
                    ebx = var_624
                    esi_1 = var_628
                    edi_1 = var_62c
                
                if (esi_1 != 0)
                    *esi_1 = 4
            else
                int32_t eax_17 = (&var_60c - edi_1) s>> 2
                
                if (esi_1 == ebx)
                    int32_t var_644_5 = ecx_4
                    sub_530c10(&var_62c)
                    ebx = var_624
                    esi_1 = var_628
                    edi_1 = var_62c
                
                if (esi_1 != 0)
                    *esi_1 = *(edi_1 + (eax_17 << 2))
            
            esi_1 = &esi_1[1]
            var_628 = esi_1
            ecx_4 = sub_532910(&var_5ec, 0xb08694, 3)
            eax_9 = var_61c_1
        
        if (*eax_9 == 3)
            int32_t var_614 = 8
            
            if (&var_614 u>= esi_1 || edi_1 u> &var_614)
                if (esi_1 == ebx)
                    int32_t var_644_8 = ecx_4
                    sub_530c10(&var_62c)
                    ebx = var_624
                    esi_1 = var_628
                    edi_1 = var_62c
                
                if (esi_1 != 0)
                    *esi_1 = 8
            else
                int32_t eax_20 = (&var_614 - edi_1) s>> 2
                
                if (esi_1 == ebx)
                    int32_t var_644_7 = ecx_4
                    sub_530c10(&var_62c)
                    ebx = var_624
                    esi_1 = var_628
                    edi_1 = var_62c
                
                if (esi_1 != 0)
                    *esi_1 = *(edi_1 + (eax_20 << 2))
            
            esi_1 = &esi_1[1]
            var_628 = esi_1
            sub_532910(&var_5ec, 0xb086ac, 2)
            eax_9 = var_61c_1
        
        eax_9 += 8
        ecx_4 = 0xff
        var_61c_1 = eax_9
    while (*(eax_9 - 6) != 0xff)

int32_t ecx_18 = sub_532910(&var_5ec, 0xb087bc, 3)
int32_t* eax_22 = &var_5ec
int32_t var_5dc
int32_t var_644_9 = var_5dc
int32_t var_5d8

if (var_5d8 u>= 8)
    eax_22 = var_5ec

void* var_608
int32_t var_604
int32_t* var_5f8
int32_t result

if (sub_536340(var_608 + 0x38, ecx_18, *(var_608 + 0x48), eax_22) != 0)
    if (var_608 + 0x38 != &var_5ec)
        sub_52e3c0(var_608 + 0x38, &var_5ec, 0, 0xffffffff)
    
    int32_t* eax_24 = sub_6ffa90(&var_5ec)
    
    if (eax_24 == 0)
        int32_t var_5c0_1 = 0xf
        int32_t var_5c4_1 = 0
        var_5d4.b = 0
        char var_18_1 = 4
        void var_5bc
        sub_712f50(&var_5bc)
        char var_18_2 = 5
        sub_710340(&var_5bc, &var_5d4, &var_62c, &var_5f8, &var_604, 0, 0, 0)
        int32_t* eax_25 = sub_6ff840(&var_5ec, &var_5d4)
        
        if (eax_25 == 0)
            result = 0
        else
            result = *eax_25
            *(var_608 + 0x50) = result
        
        char var_18_3 = 4
        sub_7132b0(&var_5bc)
        
        if (var_5c0_1 u>= 0x10)
            j__free(var_5d4)
        
        edi_1 = var_62c
    else
        result = *eax_24
        *(var_608 + 0x50) = result
else
    result = *(var_608 + 0x50)

if (var_5d8 u>= 8)
    j__free(var_5ec)

int32_t var_5d8_1 = 7
var_5ec.w = 0
int32_t eax_26 = var_604
int32_t var_5dc_1 = 0

if (eax_26 != 0)
    j__free(eax_26)
    var_604 = 0
    int32_t var_600_1 = 0
    int32_t var_5fc_2 = 0

int32_t* ebx_2 = var_5f8

if (ebx_2 != 0)
    int32_t var_5f4
    sub_605410(ebx_2, var_5f4)
    j__free(ebx_2)

if (edi_1 != 0)
    j__free(edi_1)

int32_t var_20
fsbase->NtTib.ExceptionList = var_20
int32_t var_28
sub_745f2b(var_28 ^ &var_630)
return result
