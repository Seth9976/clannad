// 函数: sub_5b8610
// 地址: 0x5b8610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9baaa8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5b85a0(&ExceptionList, arg2, arg3, 0x89f4622d)
void* eax_4 = sub_71cd20(arg3, nullptr)

if (eax_4 == 0)
    eax_4.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

int32_t* var_3c
sub_5b9470(&var_3c, eax_4)
int32_t var_8_1 = 0
char* ebx = var_3c
char* edx = ebx
int32_t var_38

if (ebx == var_38)
    edx = nullptr

sub_71cd20(arg3, edx)
int32_t* var_30
sub_5b9470(&var_30, eax_4)
var_8_1.b = 1
int128_t* var_24
sub_5b9470(&var_24, eax_4)
var_8_1.b = 2
int32_t* ecx_7 = var_30
char* esi_2 = ebx

if (ebx == var_38)
    esi_2 = nullptr

int32_t var_2c

if (ecx_7 == var_2c)
    ecx_7 = nullptr

int32_t eax_6
int32_t edx_1
edx_1:eax_6 = sx.q(eax_4)
int32_t* var_50_3 = ecx_7
int32_t eax_9
int32_t edx_3
edx_3:eax_9 = sx.q((eax_6 + (edx_1 & 0xf)) s>> 4)
int32_t var_54 = 0
void* eax_11 = (eax_9 + (edx_3 & 3)) s>> 2
void* eax_12 = sub_6bc860(eax_11, esi_2, ecx_7, ecx_7, eax_11)
int32_t* edx_6 = var_3c

if (edx_6 == var_38)
    edx_6 = nullptr

int32_t* ecx_8 = var_24
int32_t var_20

if (ecx_8 == var_20)
    ecx_8 = nullptr

int32_t var_54_1 = 1
int32_t eax_13 = sub_6bc860(eax_12, edx_6, ecx_8, ecx_8, eax_11)
int32_t* ecx_9 = var_30

if (ecx_9 == var_2c)
    ecx_9 = nullptr

int32_t eax_14 = sub_5b85a0(eax_13, eax_4, ecx_9, 0x7190c70e)
int128_t* ecx_10 = var_24

if (ecx_10 == var_20)
    ecx_10 = nullptr

sub_5b85a0(eax_14, eax_4, ecx_10, 0x499bf135)
sub_5979b0(arg4, eax_4)
int32_t* edx_9 = var_30

if (edx_9 == var_2c)
    edx_9 = nullptr

int32_t* ecx_12 = *arg4

if (ecx_12 == arg4[1])
    ecx_12 = nullptr

int32_t* var_50_5 = ecx_12
int32_t var_54_2 = 0
sub_6bc860(nullptr, edx_9, ecx_12, ecx_12, eax_11)
int32_t* edx_10 = var_24

if (edx_10 == var_20)
    edx_10 = nullptr

int32_t* ecx_13 = *arg4

if (ecx_13 == arg4[1])
    ecx_13 = nullptr

int32_t var_54_3 = 1
sub_6bc860(nullptr, edx_10, ecx_13, ecx_13, eax_11)
int128_t* eax_15 = var_24

if (eax_15 != 0)
    j__free(eax_15)

int32_t* eax_16 = var_30

if (eax_16 != 0)
    j__free(eax_16)

int32_t* eax_17 = var_3c

if (eax_17 != 0)
    j__free(eax_17)

eax_17.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_17
