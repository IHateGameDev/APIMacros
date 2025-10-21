target "headers"
  set_kind "phony"
  
  on_install(function (target)
    local src = path.join(os.projectdir(), "APIMacros")
    assert(os.isdir(src), "source headers not found: " .. src)

    local dst = path.join(target:installdir(), "include", "APIMacros")
    os.mkdir(path.directory(dst))
    os.cp(src, dst)
  end)
