// 函数: sub_49e000
// 地址: 0x49e000
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
void var_4f4
int32_t eax_1 = __security_cookie ^ &var_4f4
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
char* var_528
int32_t var_524
int64_t var_520

if (arg3 != 0)
    var_520 = arg13
    var_524 = arg9
    var_528 = arg8
    sub_49d2e0(eax_1, arg4, arg3, arg5, arg6, arg7, var_528, var_524, var_520, arg14, arg15, arg11, 
        arg12)

int32_t var_504_2 = 0xffffffff
WaitForSingleObject(data_702788, 0xffffffff)

if (arg2 u<= 0x3f)
    sub_4cb390(arg2 * 0x3c0 + &data_20af850)

int32_t var_504_3 = 0
int32_t var_508_3 = 1
int64_t hWnd
hWnd:4.d = data_702788
int32_t eax_2 = ReleaseSemaphore()

if (arg6 != 0)
    int32_t var_504_4 = 0x1fe
    char var_4d8
    sub_4cfdf0(eax_2, arg6, &var_4d8, 0x1fe)
    char* esi_1 = &var_4d8
    int32_t eax_3 = sub_4d1610(&var_4d8, 0x5c)
    void var_4d7
    
    if (eax_3 != 0xffffffff)
        esi_1 = &var_4d7 + eax_3
    
    int32_t eax_4 = sub_4d1610(esi_1, 0x2e)
    
    if (eax_4 == 0xffffffff)
        eax_4 = sub_4cfc80(esi_1)
        esi_1 -= 1
    
    void* const var_504_5 = &data_617388
    void* const var_508_4 = &data_61c694
    hWnd:4.d = &esi_1[eax_4]
    int32_t eax_6 = sub_4c3da0(sub_4c84d0(), arg7, &var_4d8, arg8)
    
    if (eax_6 == 1)
        int32_t var_504_7 = 0xff
        sub_49d3a0(eax_6, arg2, arg3, 0xff)
        int32_t esi_3 = arg10
        int32_t ebx_1
        
        if (esi_3 s<= 0)
            esi_3 = 0
            ebx_1 = 0xff
        else
            ebx_1 = 0
        
        char* var_508_5
        var_508_5.q = arg15
        void var_2d0
        BOOL eax_9 = sub_4cb840(&var_2d0, arg2, 0, arg9, esi_3, ebx_1, 
            sub_4c36f0(&var_2d0, arg7, &var_4d8, arg8, &var_2d0), &var_2d0, var_528, var_524, 
            var_520, arg13, arg14, var_508_5)
        sub_5f02dd(eax_1 ^ &var_4f4)
        return eax_9
    
    char* esi_4 = &var_4d8
    int32_t eax_10 = sub_4d1610(&var_4d8, 0x5c)
    
    if (eax_10 != 0xffffffff)
        esi_4 = &var_4d7 + eax_10
    
    int32_t eax_11 = sub_4d1610(esi_4, 0x2e)
    
    if (eax_11 == 0xffffffff)
        eax_11 = sub_4cfc80(esi_4)
        esi_4 -= 1
    
    char* var_504_9 = &var_4d8
    char const* const var_508_6 = "%s.nwa ( wav ) ( mp3 ) "
    hWnd:4.d = &data_7027c0
    esi_4[eax_11] = 0
    eax_2 = sub_4c84d0()
    
    if (data_702fc0 != 0)
        void* var_504_10 = &data_7027c0
        int32_t var_508_7 = 0x613340
        hWnd:4.d = &data_7027c0
        hWnd.d = 0x613340
        int64_t var_518
        var_518:4.d = &data_7027c0
        var_518.d = 0x613340
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_2, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                data_72d6ac, data_719b6c, 0x7027c000613340), 
            data_72d6ac, data_719b6c, 0x7027c000613340)
        eax_2 = sub_4a1e40(3)
        
        if (data_702fc0 != 0 || data_641ad0 s< 6)
        label_49e265:
            int32_t var_504_11 = 0
            int32_t var_508_8 = 0x616ce4
            hWnd:4.d = &data_7027c0
            hWnd.d = data_7027bc
            eax_2 = MessageBoxA(hWnd, 0x616ce4, nullptr)
            data_641ad0 += 1
    else if (data_641ad0 s< 6)
        goto label_49e265

sub_5f02dd(eax_1 ^ &var_4f4)
return eax_2
