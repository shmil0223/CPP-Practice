**清楚区分一下 Git 中的 `fetch`、`pull` 和 `push`**

---

## 🌍 一句话区分

| 命令          | 方向      | 作用           | 是否改变本地文件 |
| ----------- | ------- | ------------ | -------- |
| `git fetch` | 远程 → 本地 | 仅下载远程更新，不合并  | ❌ 不改变工作区 |
| `git pull`  | 远程 → 本地 | 下载并自动合并到当前分支 | ✅ 改变工作区  |
| `git push`  | 本地 → 远程 | 上传你的提交到远程仓库  | ✅ 改变远程仓库 |

---

## 🔍 详细解释

### 1️⃣ `git fetch` —— **“只拉，不合并”**

```bash
git fetch origin
```

意思：
从远程仓库（一般叫 `origin`）**拉取所有更新的分支、标签信息**到本地，但不会修改你的工作区或当前分支。

🧠 理解成：

> “把远程最新信息下载回来，但我自己不动。”

🔎 比如：

* 拉取后，你可以通过

  ```bash
  git log origin/main
  ```

  查看远程分支的更新；
* 再手动合并：

  ```bash
  git merge origin/main
  ```

---

### 2️⃣ `git pull` —— **“拉并合并”**

```bash
git pull origin main
```

意思：
= `git fetch` + `git merge`
从远程仓库拉取最新代码并直接合并到你当前分支。

🧠 理解成：

> “直接同步远程最新版本到我这里。”

⚠️ 注意：

* 如果远程和你本地有冲突，会出现 **merge conflict（合并冲突）**，需要手动解决；
* 所以很多开发者会先用 `fetch` 看清楚再决定是否合并。

---

### 3️⃣ `git push` —— **“上传我的提交”**

```bash
git push origin main
```

意思：
把你的本地分支提交推送到远程仓库。

🧠 理解成：

> “把我本地的更新同步到云端。”

⚠️ 如果远程有人改过同一分支，而你没先拉取，就会报错：

```
error: failed to push some refs to ...
hint: Updates were rejected because the remote contains work that you do not have locally.
```

👉 解决方法：

```bash
git pull origin main  # 先拉再推
```

---

## 🧭 举个实际例子

假设你在 VSCode 里写完代码：

1. `git add .`
2. `git commit -m "Finish feature"`
3. 想推到 GitHub：

```bash
git push origin main
```

如果 GitHub 上有人更新了，你推不上去：

* 就先：

  ```
  git fetch origin
  git merge origin/main
  ```
  或者更快的：
  ```
  git pull origin main
  ```
* 解决冲突后，再：
  ```
  git push origin main
  ```
## 🚀 记忆口诀

> **Fetch 看信息，Pull 拉更新，Push 发出去。**
