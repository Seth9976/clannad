// 函数: sub_494620
// 地址: 0x494620
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* ebx = data_1b8c87c
char var_108[0x100]

if (ebx != 0)
    int32_t i = 0
    void* esi = &data_1b8c89c
    BOOL eax_6
    
    do
        *(esi - 0xc) = 0
        *(esi - 8) = 0
        *(esi - 4) = 0
        *esi = 0
        *(esi + 4) = 0
        *(esi + 8) = 0
        int32_t eax_2 = *ebx
        *(esi + 0xc) = eax_2
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(eax_2 + 7)
        eax_6 = (eax_4 + (edx_1 & 7)) s>> 3
        *(esi + 0x10) = eax_6
        
        if (eax_6 != 0)
            int32_t i_2 = i
            sub_4c84d0(&var_108, "READFLAG_SEEN%04d")
            eax_6 = sub_4d6960(&var_108, esi - 8, esi - 0xc, *(esi + 0x10), &var_108)
        
        i += 1
        esi += 0x24
        ebx = &ebx[1]
    while (i s< 0x2710)
    
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_6

HANDLE hObject_3 = sub_498df0()
HANDLE hObject_1 = hObject_3
void* i_1 = nullptr
HANDLE hObject_2 = hObject_1
void* esi_1 = &data_1b8c89c

do
    *(esi_1 - 0xc) = 0
    *(esi_1 - 8) = 0
    *(esi_1 - 4) = 0
    *esi_1 = 0
    *(esi_1 + 4) = 0
    *(esi_1 + 8) = 0
    BOOL eax_8 = sub_494470(hObject_3, nullptr, nullptr, i_1, hObject_1)
    *(esi_1 + 0xc) = eax_8
    int32_t eax_10
    int32_t edx_4
    edx_4:eax_10 = sx.q(eax_8 + 7)
    hObject_3 = (eax_10 + (edx_4 & 7)) s>> 3
    *(esi_1 + 0x10) = hObject_3
    
    if (hObject_3 != 0)
        void* i_3 = i_1
        sub_4c84d0(&var_108, "READFLAG_XXX_SEEN%04d")
        hObject_3 = sub_4d6960(&var_108, esi_1 - 8, esi_1 - 0xc, *(esi_1 + 0x10), &var_108)
    
    hObject_1 = hObject_2
    i_1 += 1
    esi_1 += 0x24
while (i_1 s< 0x2710)

HANDLE hObject = hObject_1

if (hObject != 0xffffffff)
    hObject = CloseHandle(hObject)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return hObject
