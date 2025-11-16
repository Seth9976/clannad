// 函数: sub_4bf2d0
// 地址: 0x4bf2d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t entry_ebx
int32_t var_24 = entry_ebx
int32_t edi = 0
int32_t ebx

if (arg1 != 0xffffffff)
    int128_t dwParam2 = zx.o(0)
    dwParam2:8.d = 3
    mciSendCommandA(arg1, 0x814, 0x102, &dwParam2)
    ebx = dwParam2:4.d
    
    if (ebx s> 0)
        int32_t esi = 1
        
        if (ebx s>= 1)
            do
                dwParam2 = zx.o(0)
                dwParam2:8.d = 0x4001
                dwParam2:0xc.d = esi
                
                if (mciSendCommandA(arg1, 0x814, 0x112, &dwParam2) == 0 && dwParam2:4.d == 0x440)
                    edi += 1
                
                esi += 1
            while (esi s<= ebx)
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return edi
else
    ebx = entry_ebx | arg1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return ebx
