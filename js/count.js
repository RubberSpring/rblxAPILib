const text = document.getElementById("implement")
const list = document.getElementById("list")
const count = list.children.length

const replace = `There are currently ${count} implemented lists, so <b>${count / 613 * 100}%</b>`

text.innerHTML = replace