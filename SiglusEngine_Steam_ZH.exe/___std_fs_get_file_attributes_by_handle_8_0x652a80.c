// 函数: ___std_fs_get_file_attributes_by_handle@8
// 地址: 0x652a80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4178
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_68 = nullptr
int32_t var_64 = 0
int32_t var_60 = 0
int32_t var_8_1 = 0
int32_t ecx
int32_t var_80 = ecx
*data_bac434
int16_t var_2c
int16_t* eax_3 = sub_6ad9b0(&var_2c)
var_8_1.b = 1
var_8_1.b = 2
int16_t var_44
int32_t ecx_4 = sub_60c680(&var_68, sub_548cb0(eax_3, u"#D3D.ADAPTER_NO = ", &var_44, eax_3))
int32_t var_30

if (var_30 u>= 8)
    ecx_4 = j__free(var_44.d)

int32_t var_30_1 = 7
var_8_1.b = 0
int32_t var_34 = 0
var_44 = 0
int32_t var_18

if (var_18 u>= 8)
    ecx_4 = j__free(var_2c.d)

int32_t var_18_1 = 7
var_2c = 0
int32_t var_1c = 0
int32_t var_80_5 = ecx_4
int32_t edx_2
edx_2.b = *(data_bac434 + 0xc) != 0
int16_t* eax_6 = sub_6ad9b0(&var_44)
var_8_1.b = 3
var_8_1.b = 4
int32_t ecx_8 = sub_60c680(&var_68, sub_548cb0(eax_6, u"#D3D.HARDWARE_VERTEX = ", &var_2c, eax_6))

if (var_18_1 u>= 8)
    ecx_8 = j__free(var_2c.d)

int32_t var_18_2 = 7
var_8_1.b = 0
int32_t var_1c_1 = 0
var_2c = 0

if (var_30_1 u>= 8)
    ecx_8 = j__free(var_44.d)

void* edx_3 = data_bac434
int32_t var_30_2 = 7
int32_t var_34_1 = 0
var_44 = 0
*(edx_3 + 4)
int32_t var_80_10 = ecx_8
int16_t* eax_8 = sub_6ad9b0(&var_44)
var_8_1.b = 5
var_8_1.b = 6
int32_t ecx_12 = sub_60c680(&var_68, sub_548cb0(eax_8, u"#D3D.PRESENT_INTERVAL = ", &var_2c, eax_8))

if (var_18_2 u>= 8)
    ecx_12 = j__free(var_2c.d)

int32_t var_18_3 = 7
var_8_1.b = 0
int32_t var_1c_2 = 0
var_2c = 0

if (var_30_2 u>= 8)
    ecx_12 = j__free(var_44.d)

int32_t var_30_3 = 7
var_44 = 0
int32_t var_34_2 = 0
int32_t var_80_15 = ecx_12
int32_t edx_5
edx_5.b = *(data_bac434 + 0xd) != 0
int16_t* eax_11 = sub_6ad9b0(&var_44)
var_8_1.b = 7
var_8_1.b = 8
int32_t ecx_16 = sub_60c680(&var_68, sub_548cb0(eax_11, u"#D3D.USE_MIPMAP = ", &var_2c, eax_11))

if (var_18_3 u>= 8)
    ecx_16 = j__free(var_2c.d)

int32_t var_18_4 = 7
var_8_1.b = 0
int32_t var_1c_3 = 0
var_2c = 0

if (var_30_3 u>= 8)
    ecx_16 = j__free(var_44.d)

void* edx_6 = data_bac434
int32_t var_30_4 = 7
int32_t var_34_3 = 0
var_44 = 0
*(edx_6 + 8)
int32_t var_80_20 = ecx_16
void** eax_13 = sub_6ad9b0(&var_44)
var_8_1.b = 9
var_8_1.b = 0xa
int32_t ecx_20 =
    sub_60c680(&var_68, sub_548cb0(eax_13, #D3D.WIPE_BUFFER_COUNT = ", &var_2c, eax_13))

if (var_18_4 u>= 8)
    ecx_20 = j__free(var_2c.d)

int32_t var_18_5 = 7
var_8_1.b = 0
int32_t var_1c_4 = 0
var_2c = 0

if (var_30_4 u>= 8)
    ecx_20 = j__free(var_44.d)

int32_t var_30_5 = 7
var_44 = 0
int32_t var_34_4 = 0
int32_t var_80_25 = ecx_20
int32_t edx_8
edx_8.b = *(data_bac434 + 0xe) != 0
void** eax_16 = sub_6ad9b0(&var_44)
var_8_1.b = 0xb
var_8_1.b = 0xc
int32_t ecx_24 = sub_60c680(&var_68, sub_548cb0(eax_16, #DS.PLAY_SILENT_SOUND = ", &var_2c, eax_16))

if (var_18_5 u>= 8)
    ecx_24 = j__free(var_2c.d)

int32_t var_18_6 = 7
var_8_1.b = 0
int32_t var_1c_5 = 0
var_2c = 0

if (var_30_5 u>= 8)
    ecx_24 = j__free(var_44.d)

void* edx_9 = data_bac434
int32_t var_30_6 = 7
int32_t var_34_5 = 0
var_44 = 0
*(edx_9 + 0x10)
int32_t var_80_30 = ecx_24
void** eax_18 = sub_6ad9b0(&var_44)
var_8_1.b = 0xd
var_8_1.b = 0xe
sub_60c680(&var_68, sub_548cb0(eax_18, u"#MOVIE_TYPE = ", &var_2c, eax_18))

if (var_18_6 u>= 8)
    j__free(var_2c.d)

int32_t var_18_7 = 7
var_8_1.b = 0
int32_t var_1c_6 = 0
var_2c = 0

if (var_30_6 u>= 8)
    j__free(var_44.d)

int32_t var_30_7 = 7
var_44 = 0
int32_t var_34_6 = 0
int16_t var_5c
sub_652090(&var_5c)
var_8_1.b = 0xf
sub_6b3e90(&var_2c, &var_5c)
var_8_1.b = 0x10
var_8_1.b = 0xf
int32_t ebx
ebx.b = sub_6b4260(&var_2c)

if (var_18_7 u>= 8)
    j__free(var_2c.d)

int32_t ecx_33
int16_t* eax_22

if (ebx.b != 0)
    char eax_23
    eax_23, ecx_33 = sub_6b8380(&var_5c, &var_68)
    
    if (eax_23 == 0)
        void** eax_24 = sub_6b9ed0(&var_44)
        var_8_1.b = 0x13
        eax_22 = sub_548cb0(eax_24, u"system.ini", &var_2c, eax_24)
        var_8_1.b = 0x14
        goto label_652f08
else
    int16_t* eax_21 = sub_6b9ed0(&var_44)
    var_8_1.b = 0x11
    eax_22 = sub_548cb0(eax_21, 0xaf7744, &var_2c, eax_21)
    var_8_1.b = 0x12
label_652f08:
    ecx_33 = sub_684160(data_bac424, 2, eax_22)
    
    if (var_18_7 u>= 8)
        ecx_33 = j__free(var_2c.d)
    
    int32_t var_18_8 = 7
    var_2c = 0
    int32_t var_1c_7 = 0
    
    if (var_30_7 u>= 8)
        ecx_33 = j__free(var_44.d)
int32_t var_48

if (var_48 u>= 8)
    ecx_33 = j__free(var_5c.d)

struct _EXCEPTION_REGISTRATION_RECORD** esi = var_68
int32_t var_48_1 = 7
int32_t var_4c = 0
var_5c = 0

if (esi != 0)
    int32_t var_6c
    int32_t var_80_43 = var_6c
    int32_t var_84_1 = ecx_33
    sub_55d500(esi, var_64)
    j__free(esi)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
