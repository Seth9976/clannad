// 函数: sub_6ffb90
// 地址: 0x6ffb90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_c = 0xffffffff
int32_t var_10 = sub_9ce8d2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_18 = arg3
int32_t* ecx
int32_t edx
ecx, edx = __chkstk(0x105c)
int32_t arg_1040 = __security_cookie ^ &var_18
int32_t ebx
int32_t var_1c = ebx
int32_t* var_20 = arg4
int32_t edi
int32_t var_24 = edi
int32_t eax_4 = __security_cookie ^ &var_24
void arg_1048
fsbase->NtTib.ExceptionList = &arg_1048
var_4 = edx
int32_t* var_8 = ecx
int32_t* eax_5 = *ecx
(*(*eax_5 + 0x18))(eax_5, eax_4)
int32_t edi_1 = 0
void* arg_34 = &ecx[7]
int32_t* esi_1 = nullptr
int32_t ebx_3 = 0
int32_t var_1c_1 = 0
var_18 = 0
int32_t var_14 = 0
int32_t arg_104c = 0
int32_t arg_1c
__builtin_memset(&arg_1c, 0, 0x18)
arg_104c.b = 2
int32_t arg_4c = 7
void* arg_48 = nullptr
int16_t arg_38 = 0
sub_52e720(&arg_38, u"effect\", 7)
arg_104c.b = 3
int32_t* var_34
int32_t arg_4

if (arg_4 == 0)
    var_34 = &data_b08684
else
    var_34 = &data_b0868c

sub_532910(&arg_38, var_34, 3)
int32_t* eax_7 = *var_c
void arg_e30
(*(*eax_7 + 0x1c))(eax_7, &arg_e30)
int32_t ecx_4 = 0xff
int16_t arg_e28
int16_t* eax_8 = &arg_e28
int16_t* var_14_1 = &arg_e28
void** arg_30

if (arg_e28 != 0xff)
    do
        if (eax_8[3].b == 0)
            int32_t arg_c = 1
            
            if (&arg_c u>= esi_1 || edi_1 u> &arg_c)
                if (esi_1 == ebx_3)
                    int32_t var_38_2 = 0xff
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                
                if (esi_1 != 0)
                    *esi_1 = 1
            else
                int32_t eax_10 = (&arg_c - edi_1) s>> 2
                var_18 = eax_10
                
                if (esi_1 == ebx_3)
                    int32_t var_38_1 = 0xff
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                    eax_10 = var_18
                
                if (esi_1 != 0)
                    *esi_1 = *(edi_1 + (eax_10 << 2))
            
            esi_1 = &esi_1[1]
            var_20 = esi_1
            ecx_4 = sub_532910(&arg_30, 0xb082d8, 2)
            eax_8 = var_14_1
        
        if (eax_8[3].b == 1)
            __return_addr = 2
            
            if (&__return_addr u>= esi_1 || edi_1 u> &__return_addr)
                if (esi_1 == ebx_3)
                    int32_t var_38_4 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                
                if (esi_1 != 0)
                    *esi_1 = 2
            else
                int32_t eax_13 = (&__return_addr - edi_1) s>> 2
                var_18 = eax_13
                
                if (esi_1 == ebx_3)
                    int32_t var_38_3 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                    eax_13 = var_18
                
                if (esi_1 != 0)
                    *esi_1 = *(edi_1 + (eax_13 << 2))
            
            esi_1 = &esi_1[1]
            var_20 = esi_1
            ecx_4 = sub_532910(&arg_30, 0xb0869c, 3)
            eax_8 = var_14_1
        
        if (eax_8[3].b == 2)
            var_8 = 4
            
            if (&var_8 u>= esi_1 || edi_1 u> &var_8)
                if (esi_1 == ebx_3)
                    int32_t var_38_6 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                
                if (esi_1 != 0)
                    *esi_1 = 4
            else
                int32_t eax_16 = (&var_8 - edi_1) s>> 2
                var_18 = eax_16
                
                if (esi_1 == ebx_3)
                    int32_t var_38_5 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                    eax_16 = var_18
                
                if (esi_1 != 0)
                    *esi_1 = *(edi_1 + (eax_16 << 2))
            
            esi_1 = &esi_1[1]
            var_20 = esi_1
            ecx_4 = sub_532910(&arg_30, 0xb08694, 3)
            eax_8 = var_14_1
        
        if (eax_8[3].b == 3)
            int32_t arg_10 = 8
            
            if (&arg_10 u>= esi_1 || edi_1 u> &arg_10)
                if (esi_1 == ebx_3)
                    int32_t var_38_8 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                
                if (esi_1 != 0)
                    *esi_1 = 8
            else
                int32_t eax_19 = (&arg_10 - edi_1) s>> 2
                var_18 = eax_19
                
                if (esi_1 == ebx_3)
                    int32_t var_38_7 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                    eax_19 = var_18
                
                if (esi_1 != 0)
                    *esi_1 = *(edi_1 + (eax_19 << 2))
            
            esi_1 = &esi_1[1]
            var_20 = esi_1
            ecx_4 = sub_532910(&arg_30, 0xb086ac, 2)
            eax_8 = var_14_1
        
        if (eax_8[3].b == 5)
            var_4 = 0x20
            
            if (&var_4 u>= esi_1 || edi_1 u> &var_4)
                if (esi_1 == ebx_3)
                    int32_t var_38_10 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                
                if (esi_1 != 0)
                    *esi_1 = 0x20
            else
                int32_t eax_22 = (&var_4 - edi_1) s>> 2
                var_18 = eax_22
                
                if (esi_1 == ebx_3)
                    int32_t var_38_9 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                    eax_22 = var_18
                
                if (esi_1 != 0)
                    *esi_1 = *(edi_1 + (eax_22 << 2))
            
            esi_1 = &esi_1[1]
            var_20 = esi_1
            ecx_4 = sub_532910(&arg_30, 0xb086a4, 3)
            eax_8 = var_14_1
        
        if (eax_8[3].b == 6)
            int32_t arg_8 = 0x40
            
            if (&arg_8 u>= esi_1 || edi_1 u> &arg_8)
                if (esi_1 == ebx_3)
                    int32_t var_38_12 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                
                if (esi_1 != 0)
                    *esi_1 = 0x40
            else
                int32_t eax_25 = (&arg_8 - edi_1) s>> 2
                var_18 = eax_25
                
                if (esi_1 == ebx_3)
                    int32_t var_38_11 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                    eax_25 = var_18
                
                if (esi_1 != 0)
                    *esi_1 = *(edi_1 + (eax_25 << 2))
            
            esi_1 = &esi_1[1]
            var_20 = esi_1
            ecx_4 = sub_532910(&arg_30, 0xb086bc, 2)
            eax_8 = var_14_1
        
        if (eax_8[3].b == 7)
            var_c = 0x80
            
            if (&var_c u>= esi_1 || edi_1 u> &var_c)
                if (esi_1 == ebx_3)
                    int32_t var_38_14 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                
                if (esi_1 != 0)
                    *esi_1 = 0x80
            else
                int32_t eax_28 = (&var_c - edi_1) s>> 2
                var_18 = eax_28
                
                if (esi_1 == ebx_3)
                    int32_t var_38_13 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                    eax_28 = var_18
                
                if (esi_1 != 0)
                    *esi_1 = *(edi_1 + (eax_28 << 2))
            
            esi_1 = &esi_1[1]
            var_20 = esi_1
            ecx_4 = sub_532910(&arg_30, 0xb086b4, 3)
            eax_8 = var_14_1
        
        if (eax_8[3].b == 0xa)
            arg_4 = 0x100
            
            if (&arg_4 u>= esi_1 || edi_1 u> &arg_4)
                if (esi_1 == ebx_3)
                    int32_t var_38_16 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                
                if (esi_1 != 0)
                    *esi_1 = 0x100
            else
                int32_t eax_31 = (&arg_4 - edi_1) s>> 2
                var_18 = eax_31
                
                if (esi_1 == ebx_3)
                    int32_t var_38_15 = ecx_4
                    sub_530c10(&var_24)
                    ebx_3 = var_1c_1
                    esi_1 = var_20
                    edi_1 = var_24
                    eax_31 = var_18
                
                if (esi_1 != 0)
                    *esi_1 = *(edi_1 + (eax_31 << 2))
            
            esi_1 = &esi_1[1]
            var_20 = esi_1
            sub_532910(&arg_30, 0xb086d0, 2)
            eax_8 = var_14_1
        
        eax_8 = &eax_8[4]
        ecx_4 = 0xff
        var_14_1 = eax_8
    while (*eax_8 != 0xff)

int32_t* arg_20

if (*(arg6 + 0x48) != 0 && *(var_10 + 0x44) != 0)
    sub_6ff730(&arg_20, "MESHTEXTURE")
    sub_532910(&arg_30, 0xb086e8, 3)

if (*(arg6 + 0x3c) == 1)
    sub_6ff730(&arg_20, "SHADOWTEXTURE")
    sub_532910(&arg_30, 0xb086fc, 3)

if (*(arg6 + 0x38) == 5)
    int32_t* eax_34 = *(arg6 + 0xa0)
    
    if (eax_34 != 0 && *eax_34 != 0)
        sub_6ff730(&arg_20, "TOONTEXTURE")
        sub_5329d0(&arg_30, 0xb08714)

int32_t eax_35 = *(arg6 + 0x38)

if (eax_35 == 8 || eax_35 == 9)
    int32_t* eax_36 = *(arg6 + 0xa8)
    
    if (eax_36 != 0 && *eax_36 != 0)
        sub_6ff730(&arg_20, "NORMALTEXTURE")
        sub_532910(&arg_30, 0xb08724, 3)

int32_t arg_14

if (*(arg6 + 0x80) != 0)
    var_10 = 0x10
    sub_530ba0(&arg_14, &var_10)
    sub_532910(&arg_30, 0xb0871c, 3)

if (*(arg6 + 0x49) != 0)
    var_10 = 1
    sub_530ba0(&arg_14, &var_10)
    sub_532910(&arg_30, u"_mrbd", 5)

if (*(arg6 + 0x5c) != 0)
    var_10 = 2
    sub_530ba0(&arg_14, &var_10)
    sub_532910(&arg_30, u"_rgb", 4)

switch (*(arg6 + 0x38))
    case 0
        sub_5329d0(&arg_30, u"_nolt")
    case 1
        sub_532910(&arg_30, u"_lmbt", 5)
    case 2
        sub_5329d0(&arg_30, u"_blph")
    case 3
        sub_5329d0(&arg_30, u"_ppbp")
    case 4
        sub_5329d0(&arg_30, u"_pphl")
    case 5
        sub_5329d0(&arg_30, u"_toon")
    case 6
        sub_5329d0(&arg_30, u"_ffp")
    case 7
        sub_5329d0(&arg_30, u"_ppfp")
    case 8
        sub_5329d0(&arg_30, u"_bump")
    case 9
        sub_5329d0(&arg_30, u"_para")

int32_t eax_38 = *(arg6 + 0x3c)

if (eax_38 == 1)
    sub_532910(&arg_30, u"_dpbs", 5)
else if (eax_38 == 0)
    sub_5329d0(&arg_30, u"_nost")

int32_t eax_39 = *(arg6 + 0x40)

if (eax_39 != 0 && (eax_39.b & 1) != 0)
    sub_532910(&arg_30, u"_rmlt", 5)

int32_t ecx_49 = sub_532910(&arg_30, 0xb087bc, 3)
void** eax_40 = &arg_30
int32_t var_38_21 = arg7

if (arg8 u>= 8)
    eax_40 = arg_30

int32_t result

if (sub_536340(arg6, ecx_49, *(arg6 + 0x10), eax_40) != 0)
    if (arg6 != &arg_30)
        sub_52e3c0(arg6, &arg_30, 0, 0xffffffff)
    
    int32_t* eax_42 = sub_6ffa90(&arg_30)
    
    if (eax_42 == 0)
        int32_t arg_5c = 0xf
        int32_t arg_58 = 0
        arg_48.b = 0
        char arg_1044 = 4
        void arg_60
        sub_70a290(&arg_60)
        arg_1044 = 5
        sub_710340(&arg_60, &arg_48, &var_24, &arg_20, &arg_14, *(arg6 + 0x38), *(arg6 + 0x3c), 
            *(arg6 + 0x40))
        int32_t* eax_43 = sub_6ff840(&arg_30, &arg_48)
        
        if (eax_43 == 0)
            result = 0
        else
            result = *eax_43
            *(arg6 + 0x18) = result
        
        arg_1044 = 4
        sub_70ade0(&arg_60)
        
        if (arg_5c u>= 0x10)
            j__free(arg_48)
        
        edi_1 = var_24
    else
        result = *eax_42
        *(arg6 + 0x18) = result
else
    result = *(arg6 + 0x18)

if (arg8 u>= 8)
    j__free(arg_30)

arg8 = 7
arg_30.w = 0
int32_t eax_44 = arg_14
arg7 = 0

if (eax_44 != 0)
    j__free(eax_44)
    arg_14 = 0
    int32_t arg_18 = 0
    arg_1c = 0

int32_t* ebx_5 = arg_20

if (ebx_5 != 0)
    sub_605410(ebx_5, arg5)
    j__free(ebx_5)

if (edi_1 != 0)
    j__free(edi_1)

fsbase->NtTib.ExceptionList = arg10
sub_745f2b(arg9 ^ &var_24)
return result
