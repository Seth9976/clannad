// 函数: sub_4e5160
// 地址: 0x4e5160
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = sub_41e440()
int32_t eax_3

if (eax != 0)
    eax_3 = 3
    data_1321ec4 = 3
else
    int32_t eax_1
    
    if (data_702fc0 != eax)
        eax_1 = sub_55aff0()
    
    if (data_702fc0 != eax && eax_1 != 0)
        eax_3 = 3
        data_1321ec4 = 3
    else if (sub_546070() != 0)
        eax_3 = 3
        data_1321ec4 = 3
    else
        sub_4533f0()
        eax_3 = data_1321ec4

if (data_702fc0 != 0 && eax_3 != 0 && data_1af4e70 == 0)
    SendMessageA(data_7027bc, 0x20, 0, 0)

sub_4d5ab0(data_12ff388)

if (data_1bfffc8 == 0x1e240)
    WaitForSingleObject(data_641b34, 0xffffffff)
    bool cond:0_1 = data_1bfe268 == 0xffffffff
    data_1bfffc8 = 0
    
    if (not(cond:0_1))
        sub_4bef40()
    
    ReleaseSemaphore(data_641b34, 1, nullptr)

sub_4befc0()
sub_4be570()
return sub_4cd170()
