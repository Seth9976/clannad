// 函数: sub_6b53f0
// 地址: 0x6b53f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb03d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_30c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2a0 = 0
int32_t var_8_1 = 0
int32_t var_264
int32_t* arg_4
int16_t* eax_3 = sub_6b3db0(&var_264, &arg_4)
var_8_1.b = 1

if (&arg_4 != eax_3)
    sub_52e3c0(&arg_4, eax_3, 0, 0xffffffff)

var_8_1.b = 0
int32_t var_250

if (var_250 u>= 8)
    j__free(var_264)

int16_t var_234
sub_6b3e20(&var_234, arg2)
int16_t* ecx_4 = &var_234
var_8_1.b = 2
sub_6ae560(ecx_4)
int32_t var_310_2 = 7
char var_296 = 0
int16_t* var_224
void commandLine
int32_t ecx

if (sub_536340(ecx_4, &var_234, var_224, u"MIW.EXE") == 0)
    sub_6b43d0(&var_264, arg2)
    var_8_1.b = 3
    var_8_1.b = 4
    int32_t var_29c_1 = 1
    int32_t var_2a0_1 = 1
    int32_t var_294
    char eax_6 = sub_5ccf10(sub_53d730(&var_264, &var_294, 0, 2), 0xb00444)
    char var_295_1
    int16_t var_27c
    char eax_8
    
    if (eax_6 == 0)
        int32_t var_8_2 = 5
        var_29c_1 = 3
        int32_t var_2a0_2 = 3
        eax_8 = sub_5ccf10(sub_53d730(&var_264, &var_27c, 0, 2), 0xb00478)
        var_295_1 = 0
    
    if (eax_6 != 0 || eax_8 != 0)
        var_295_1 = 1
    
    int32_t eax_9 = var_29c_1
    
    if ((eax_9.b & 2) != 0)
        eax_9 &= 0xfffffffd
        int32_t var_268
        
        if (var_268 u>= 8)
            j__free(var_27c.d)
        
        int32_t var_268_1 = 7
        int32_t var_26c_1 = 0
        var_27c = 0
    
    int32_t var_8_3 = 3
    int32_t var_280
    
    if ((eax_9.b & 1) != 0 && var_280 u>= 8)
        j__free(var_294)
    
    int32_t* eax_10 = &arg_4
    
    if (var_295_1 == 0)
        if (arg3 u>= 8)
            eax_10 = arg_4
        
        int32_t* ecx_11
        
        if (arg2[5] u< 8)
            ecx_11 = arg2
        else
            ecx_11 = *arg2
        
        int32_t var_310_6 = ecx
        int32_t* var_314_2 = eax_10
        int32_t* var_318_6 = ecx_11
        __swprintf_c(&commandLine, 0x104, u"%s "%s+%d"")
    else
        if (arg3 u>= 8)
            eax_10 = arg_4
        
        int32_t* ecx_10
        
        if (arg2[5] u< 8)
            ecx_10 = arg2
        else
            ecx_10 = *arg2
        
        int32_t* var_310_5 = eax_10
        int32_t var_314_1 = ecx
        int32_t* var_318_5 = ecx_10
        __swprintf_c(&commandLine, 0x104, u"%s /+%d "%s"")
        var_296 = 1
    
    var_8_3.b = 2
    
    if (var_250 u>= 8)
        j__free(var_264)
    
    goto label_6b5817

wchar16 const* const var_31c_1

if (sub_5ccf10(&var_234, u"SAKURA.EXE") != 0)
    int32_t* eax_12 = &arg_4
    
    if (arg3 u>= 8)
        eax_12 = arg_4
    
    if (arg2[5] u< 8)
        int32_t var_310_9 = ecx
        int32_t* var_314_4 = eax_12
        int32_t* var_318_8 = arg2
        var_31c_1 = u"%s "%s" -Y:%d"
    else
        int32_t var_310_8 = ecx
        int32_t* var_314_3 = eax_12
        int32_t var_318_7 = *arg2
        var_31c_1 = u"%s "%s" -Y:%d"
    
    goto label_6b5807

char eax_13 = sub_5ccf10(&var_234, u"HIDEMARU.EXE")
char eax_15

if (eax_13 == 0)
    eax_15 = sub_5ccf10(&var_234, u"WZEDITOR.EXE")

if (eax_13 != 0 || eax_15 != 0)
    int32_t* eax_14 = &arg_4
    
    if (arg3 u>= 8)
        eax_14 = arg_4
    
    if (arg2[5] u< 8)
        int32_t* var_310_11 = eax_14
        int32_t var_314_6 = ecx
        int32_t* var_318_10 = arg2
        var_31c_1 = u"%s /j%d "%s""
    else
        int32_t* var_310_10 = eax_14
        int32_t var_314_5 = ecx
        int32_t var_318_9 = *arg2
        var_31c_1 = u"%s /j%d "%s""
    
    goto label_6b5807

if (sub_5ccf10(&var_234, u"WZEDIT32.EXE") != 0)
    int32_t* eax_17 = &arg_4
    
    if (arg3 u>= 8)
        eax_17 = arg_4
    
    int32_t* ecx_20
    
    if (arg2[5] u< 8)
        ecx_20 = arg2
    else
        ecx_20 = *arg2
    
    int32_t* var_310_12 = eax_17
    int32_t* var_314_7 = ecx_20
    __swprintf_c(&commandLine, 0x104, u"%s "%s"")
    goto label_6b5817

if (sub_5ccf10(&var_234, u"K2EDITOR.EXE") != 0)
    int32_t* eax_19 = &arg_4
    
    if (arg3 u>= 8)
        eax_19 = arg_4
    
    if (arg2[5] u< 8)
        int32_t var_310_14 = ecx
        int32_t* var_314_9 = eax_19
        int32_t* var_318_12 = arg2
        var_31c_1 = u"%s "%s" /j%d"
    else
        int32_t var_310_13 = ecx
        int32_t* var_314_8 = eax_19
        int32_t var_318_11 = *arg2
        var_31c_1 = u"%s "%s" /j%d"
    
    goto label_6b5807

if (sub_5ccf10(&var_234, u"EMEDITOR.EXE") != 0)
    int32_t* eax_21 = &arg_4
    
    if (arg3 u>= 8)
        eax_21 = arg_4
    
    if (arg2[5] u< 8)
        int32_t* var_310_16 = eax_21
        int32_t var_314_11 = ecx
        int32_t* var_318_14 = arg2
        var_31c_1 = u"%s /l %d "%s""
    else
        int32_t* var_310_15 = eax_21
        int32_t var_314_10 = ecx
        int32_t var_318_13 = *arg2
        var_31c_1 = u"%s /l %d "%s""
    
    goto label_6b5807

char eax_22 = sub_5ccf10(&var_234, u"PEGGY.EXE")
char eax_23

if (eax_22 == 0)
    eax_23 = sub_5ccf10(&var_234, u"PEGGYPRO.EXE")

int32_t result

if (eax_22 == 0 && eax_23 == 0)
    result = sub_52e8a0(&var_234)
else
    int32_t* eax_24 = &arg_4
    
    if (arg3 u>= 8)
        eax_24 = arg_4
    
    int32_t* ecx_29
    
    if (arg2[5] u< 8)
        ecx_29 = arg2
    else
        ecx_29 = *arg2
    
    int32_t* var_310_17 = eax_24
    int32_t var_314_12 = ecx
    int32_t* var_318_15 = ecx_29
    var_31c_1 = u"%s -L%d "%s""
label_6b5807:
    __swprintf_c(&commandLine, 0x104, var_31c_1)
label_6b5817:
    int32_t* lpCurrentDirectory_1
    sub_6b3e90(&lpCurrentDirectory_1, arg2)
    int32_t startupInfo
    _memset(&startupInfo, 0, 0x44)
    startupInfo = 0x44
    int16_t var_2cc_1 = 1
    int32_t* lpCurrentDirectory = &lpCurrentDirectory_1
    int32_t var_238
    
    if (var_238 u>= 8)
        lpCurrentDirectory = lpCurrentDirectory_1
    
    PROCESS_INFORMATION processInformation
    __builtin_memset(&processInformation, 0, 0x10)
    CreateProcessW(nullptr, &commandLine, nullptr, nullptr, 0, 0, nullptr, lpCurrentDirectory, 
        &startupInfo, &processInformation)
    
    if (var_296 != 0)
        WaitForInputIdle(processInformation.hProcess, 0x1f4)
    
    if (var_238 u>= 8)
        j__free(lpCurrentDirectory_1)
    
    int32_t var_238_1 = 7
    int32_t var_23c_1 = 0
    lpCurrentDirectory_1.w = 0
    int32_t var_220
    
    if (var_220 u>= 8)
        j__free(var_234.d)
    
    result = 0
    int32_t var_220_1 = 7
    int32_t var_224_1 = 0
    var_234 = 0

if (arg3 u>= 8)
    result = j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
