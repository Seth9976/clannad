// 函数: sub_4bdfd0
// 地址: 0x4bdfd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = arg7
int32_t esi = arg6
int32_t ebx = arg4
int32_t edi = arg5

if (arg4 s> esi)
    ebx = esi
    esi = arg4

if (arg5 s> eax_2)
    edi = eax_2
    eax_2 = arg5

data_208c48c = esi
data_208c490 = eax_2
data_208046c = ebx
data_208c488 = edi
data_208c494 = esi - ebx + 1
data_208c498 = eax_2 - edi + 1
int128_t dwParam2
__builtin_memset(&dwParam2, 0, 0x2c)
int128_t dwParam2_2
__builtin_memset(&dwParam2_2, 0, 0x14)
int128_t dwParam2_1
char const* const eax_5

if (arg8 != 0)
    eax_5 = dwParam2_1:8.d
    
    if (arg8 == 1)
        eax_5 = "MPEGVideo"
else
    eax_5 = "avivideo"

dwParam2_1:8.d = eax_5
dwParam2_1:0xc.d = arg3
data_207444c = arg8
uint32_t eax_7 = mciSendCommandA(0, 0x803, 0x2202, &dwParam2_1)

if (eax_7 == 0)
    uint32_t mciId = dwParam2_1:4.d
    int32_t nHeight = data_208c498
    int32_t nWidth = data_208c494
    int32_t ebx_1 = data_208c488
    int32_t eax_8 = data_208046c
    RECT rect
    GetClientRect(arg2, &rect)
    HWND hWnd = CreateWindowExA(WS_EX_LEFT, "STATIC", nullptr, 0x4000000e, rect.left + eax_8, 
        rect.top + ebx_1, nWidth, nHeight, arg2, 0xc361, data_134cebc, nullptr)
    
    if (hWnd != 0)
        ShowWindow(hWnd, SW_SHOW)
        dwParam2:4.d = hWnd
        uint32_t eax_13 = mciSendCommandA(mciId, 0x841, 0x10002, &dwParam2)
        
        if (eax_13 == 0)
            dwParam2_2:4.d = eax_13
            dwParam2_2:8.d = eax_13
            dwParam2_2:0xc.d = data_208c494
            int32_t var_10_1 = data_208c498
            uint32_t eax_16 = mciSendCommandA(mciId, 0x842, 0x50002, &dwParam2_2)
            
            if (eax_16 == 0)
                data_139270c = mciId
                data_1bfe270 = hWnd
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_16
        
        mciSendCommandA(mciId, 0x804, 2, 0)
        BOOL eax_17 = DestroyWindow(hWnd)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_17
    
    eax_7 = mciSendCommandA(mciId, 0x804, 2, 0)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_7
